import urllib.request

url1 ="https://www.yandex.com.tr/gorsel/search?family=yes&img_url=https%3A%2F%2Fscontent-hel3-1.cdninstagram.com%2Fv%2Ft51.2885-15%2Fe35%2F273545903_144369214699724_7723228294293802249_n.jpg%3F_nc_ht%3Dscontent-hel3-1.cdninstagram.com%26_nc_cat%3D108%26_nc_ohc%3D4X2XBLR-N_UAX9lCHIA%26edm%3DAABBvjUBAAAA%26ccb%3D7-4%26oh%3D00_AT-vWBU16RaIfxBjYYJ_2dwji8vlTz8bzVo1Ou0qjBIVFw%26oe%3D62131DF5%26_nc_sid%3D83d603&lr=11504&pos=6&rpt=simage&serp_list_type=all&source=serp&stype=image&text=semerkand%20cami%20resim"
url2 ="https://www.yandex.com.tr/gorsel/search?family=yes&img_url=https%3A%2F%2Fpbs.twimg.com%2Fmedia%2FEzUoPb_UUAEfT0H.jpg&lr=11504&pos=0&rpt=simage&text=faysal%20cami%20resim"
url3 ="https://www.yandex.com.tr/gorsel/search?family=yes&img_url=https%3A%2F%2Fupload.wikimedia.org%2Fwikipedia%2Fcommons%2Fthumb%2F3%2F32%2FAstana_DSC04245_%25287709924248%2529.jpg%2F540px-Astana_DSC04245_%25287709924248%2529.jpg&lr=11504&pos=0&rpt=simage&source=related-duck&text=Nur%20Astana%20Camii"
urllistesi =[url1,url2,url3]
say =1
for url in urllistesi:
    urllib.request.urlretrieve(url,"Resim"+str(say)+".jpg")
    say +=1
    

    
    
    
    
    
    
    
    
    