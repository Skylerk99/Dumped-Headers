/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLIntersiloServiceProtocol.h>

@class CLSilo, CLIntersiloInterface, NSString;

@interface CLIntersiloService : NSObject <CLIntersiloServiceProtocol> {

	BOOL _valid;
	CLSilo* _silo;
	CLIntersiloInterface* _inboundInterface;
	CLIntersiloInterface* _outboundInterface;

}

@property (nonatomic,readonly) CLSilo * silo;                                         //@synthesize silo=_silo - In the implementation block
@property (nonatomic,readonly) CLIntersiloInterface * inboundInterface;               //@synthesize inboundInterface=_inboundInterface - In the implementation block
@property (nonatomic,readonly) CLIntersiloInterface * outboundInterface;              //@synthesize outboundInterface=_outboundInterface - In the implementation block
@property (assign,nonatomic) BOOL valid;                                              //@synthesize valid=_valid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)becameFatallyBlocked:(id)arg1 ;
+(id)getSilo;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
+(BOOL)isSupported;
-(id)initWithInboundProtocol:(id)arg1 outboundProtocol:(id)arg2 andSilo:(id)arg3 ;
-(CLSilo *)silo;
-(id)initInSilo:(id)arg1 ;
-(CLIntersiloInterface *)inboundInterface;
-(CLIntersiloInterface *)outboundInterface;
-(BOOL)isHydrated;
-(id)init;
-(NSString *)debugDescription;
-(BOOL)valid;
-(void)setValid:(BOOL)arg1 ;
@end

