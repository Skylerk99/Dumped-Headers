/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:59 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDPStateUIProvider;
@class CDPContext;

@interface CDPStateController : NSObject {

	CDPContext* _context;
	id<CDPStateUIProvider> _uiProvider;

}

@property (nonatomic,readonly) CDPContext * context;                         //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id<CDPStateUIProvider> uiProvider;              //@synthesize uiProvider=_uiProvider - In the implementation block
-(CDPContext *)context;
-(id)initWithContext:(id)arg1 ;
-(void)setUiProvider:(id<CDPStateUIProvider>)arg1 ;
-(void)handleCloudDataProtectionStateWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)shouldAllowCDPEnrollment;
-(id<CDPStateUIProvider>)uiProvider;
-(void)localSecretChangedTo:(id)arg1 secretType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
@end

