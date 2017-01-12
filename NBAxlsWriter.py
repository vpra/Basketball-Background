from urllib2 import urlopen
from bs4 import BeautifulSoup
url = "http://www.basketball-reference.com"
html = urlopen(url);
soup = BeautifulSoup(html, "html.parser")
table = soup.find('table', {'class': 'nohover'})
tr = table.findAll('tr')
data = []
for x in tr:
   th = x.findAll('th')
   arc = []
   for y in th:
      arc.append(y.getText())
   data.append(arc)
   td = x.findAll('td')
   arcs = []
   for z in td:
      arcs.append(z.getText())
   data.append(arcs)
data = [x for x in data if x!=[]]
#data not contains the exact data needed
import xlwt
wb = xlwt.Workbook()
ws = wb.add_sheet("Day's Top Performances")
for x in range(0,len(data)):
   for y in range(0,len(data[x])):
      ws.write(x,y,data[x][y])
wb.save("NBA.xls")



