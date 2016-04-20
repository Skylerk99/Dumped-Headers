/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:06 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessageUI/MessageUI-Structs.h>
@interface MFAddressBookManager : NSObject {

	void* _addressBook;
	int _lock;
	CFDictionaryRef _clients;

}
+(BOOL)isAuthorizedToUseAddressBook;
+(id)sharedManager;
-(void)_applicationResumed:(id)arg1 ;
-(void)_handleAddressBookChangeNotification;
-(id)_clientWeakReferences;
-(void)_handleAddressBookPrefsChangeNotification;
-(void)dealloc;
-(id)init;
-(void)addClient:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
-(void*)addressBook;
@end

