/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFContextProvider.h>

@class CNContact, CNContactStore;

@interface CNSiriContactContextProvider : NSObject <AFContextProvider> {

	CNContact* _contact;
	CNContactStore* _store;

}
-(id)contextManager;
-(void)_removeContextProviderOnMainThread;
-(id)initWithContact:(id)arg1 store:(id)arg2 ;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)allowContextProvider:(id)arg1 ;
-(id)getCurrentContext;
@end

