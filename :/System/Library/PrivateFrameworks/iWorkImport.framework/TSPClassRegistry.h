/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableDictionary;

@interface TSPClassRegistry : NSObject {

	NSMutableDictionary* _registry;
	BOOL _didFinishRegistration;

}
-(void)registerClass:(Class)arg1 forExtensionNumber:(int)arg2 ;
-(Class)classForMessage:(const Message*)arg1 ;
-(Class)classForExtensionNumber:(int)arg1 ;
-(id)init;
@end

