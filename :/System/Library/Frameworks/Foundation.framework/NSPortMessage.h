/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:38 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSPort, NSMutableArray, NSArray;

@interface NSPortMessage : NSObject {

	NSPort* localPort;
	NSPort* remotePort;
	NSMutableArray* components;
	unsigned msgid;
	void* reserved2;
	void* reserved;

}

@property (copy,readonly) NSArray * components; 
@property (retain,readonly) NSPort * receivePort; 
@property (retain,readonly) NSPort * sendPort; 
@property (assign) unsigned msgid; 
-(id)initWithSendPort:(id)arg1 receivePort:(id)arg2 components:(id)arg3 ;
-(void)setMsgid:(unsigned)arg1 ;
-(id)initWithReceivePort:(id)arg1 sendPort:(id)arg2 components:(id)arg3 ;
-(NSPort *)sendPort;
-(NSPort *)receivePort;
-(unsigned)msgid;
-(BOOL)sendBeforeDate:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)components;
@end

