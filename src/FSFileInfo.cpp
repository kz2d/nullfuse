#include "FSFileInfo.h"
FSFileInfo::FSFileInfo(){
	this->st=std::make_shared<struct stat>();
	
}
FSFileInfo::FSFileInfo(std::shared_ptr<FSFileInfo> src){
	this->st=std::make_shared<struct stat>();
	std::memcpy(this->st.get(),src.get()->st.get(),sizeof(struct stat));
}
struct stat * FSFileInfo::getStat(){
	return this->st.get();
}
