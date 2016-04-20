/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DADaemonSupport/DAAgent.h>
#import <DADaemonSupport/DABabysittable.h>

@class CoreDAVOptionsTask, NSTimer, NSString;

@interface DACoreDAVAgent : DAAgent <DABabysittable> {

	CoreDAVOptionsTask* _optionsProbe;
	NSTimer* _optionsTimeoutTimer;

}

@property (nonatomic,retain) CoreDAVOptionsTask * optionsProbe;              //@synthesize optionsProbe=_optionsProbe - In the implementation block
@property (nonatomic,retain) NSTimer * optionsTimeoutTimer;                  //@synthesize optionsTimeoutTimer=_optionsTimeoutTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)waiterID;
-(NSTimer *)optionsTimeoutTimer;
-(void)setOptionsTimeoutTimer:(NSTimer *)arg1 ;
-(void)_cancelOptionsTimer;
-(CoreDAVOptionsTask *)optionsProbe;
-(void)setOptionsProbe:(CoreDAVOptionsTask *)arg1 ;
-(void)_serverProbeTimedOut;
-(void)_probeAndSyncWithBlock:(/*^block*/id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
@end

