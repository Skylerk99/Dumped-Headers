/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:39 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSPortNameServer.h>

@interface NSMachBootstrapServer : NSPortNameServer
+(id)sharedInstance;
-(BOOL)registerPort:(id)arg1 name:(id)arg2 ;
-(id)portForName:(id)arg1 host:(id)arg2 ;
-(id)portForName:(id)arg1 ;
-(BOOL)removePortForName:(id)arg1 ;
-(id)portForName:(id)arg1 options:(unsigned long long)arg2 ;
-(id)servicePortWithName:(id)arg1 ;
@end

