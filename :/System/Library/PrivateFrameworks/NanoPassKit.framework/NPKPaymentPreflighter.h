/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:26 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PUConnection, NSSManager, PKPaymentWebService, NSDate;

@interface NPKPaymentPreflighter : NSObject {

	BOOL _checkedWatchPasscodeAndUnlockedStatus;
	BOOL _checkedCompanioniCloudStatus;
	BOOL _checkedWatchiCloudStatus;
	BOOL _checkedWristDetectionStatus;
	BOOL _authRandomSetIfNecessary;
	BOOL _needsPasscode;
	BOOL _needsUnlock;
	BOOL _watchConnected;
	BOOL _needsCompanioniCloudAccount;
	BOOL _needsWatchiCloudAccount;
	BOOL _needsWristDetection;
	BOOL _preflighting;
	PUConnection* _passcodeConnection;
	NSSManager* _systemSettingsManager;
	/*^block*/id _preflightCompletionHandler;
	PKPaymentWebService* _webService;
	NSDate* _watchPasscodeAndUnlockedQueryDate;

}

@property (nonatomic,retain) PUConnection * passcodeConnection;                       //@synthesize passcodeConnection=_passcodeConnection - In the implementation block
@property (nonatomic,retain) NSSManager * systemSettingsManager;                      //@synthesize systemSettingsManager=_systemSettingsManager - In the implementation block
@property (assign,nonatomic) BOOL checkedWatchPasscodeAndUnlockedStatus;              //@synthesize checkedWatchPasscodeAndUnlockedStatus=_checkedWatchPasscodeAndUnlockedStatus - In the implementation block
@property (assign,nonatomic) BOOL checkedCompanioniCloudStatus;                       //@synthesize checkedCompanioniCloudStatus=_checkedCompanioniCloudStatus - In the implementation block
@property (assign,nonatomic) BOOL checkedWatchiCloudStatus;                           //@synthesize checkedWatchiCloudStatus=_checkedWatchiCloudStatus - In the implementation block
@property (assign,nonatomic) BOOL checkedWristDetectionStatus;                        //@synthesize checkedWristDetectionStatus=_checkedWristDetectionStatus - In the implementation block
@property (assign,nonatomic) BOOL authRandomSetIfNecessary;                           //@synthesize authRandomSetIfNecessary=_authRandomSetIfNecessary - In the implementation block
@property (assign,nonatomic) BOOL needsPasscode;                                      //@synthesize needsPasscode=_needsPasscode - In the implementation block
@property (assign,nonatomic) BOOL needsUnlock;                                        //@synthesize needsUnlock=_needsUnlock - In the implementation block
@property (assign,nonatomic) BOOL watchConnected;                                     //@synthesize watchConnected=_watchConnected - In the implementation block
@property (assign,nonatomic) BOOL needsCompanioniCloudAccount;                        //@synthesize needsCompanioniCloudAccount=_needsCompanioniCloudAccount - In the implementation block
@property (assign,nonatomic) BOOL needsWatchiCloudAccount;                            //@synthesize needsWatchiCloudAccount=_needsWatchiCloudAccount - In the implementation block
@property (assign,nonatomic) BOOL needsWristDetection;                                //@synthesize needsWristDetection=_needsWristDetection - In the implementation block
@property (nonatomic,copy) id preflightCompletionHandler;                             //@synthesize preflightCompletionHandler=_preflightCompletionHandler - In the implementation block
@property (nonatomic,retain) PKPaymentWebService * webService;                        //@synthesize webService=_webService - In the implementation block
@property (assign,getter=isPreflighting,nonatomic) BOOL preflighting;                 //@synthesize preflighting=_preflighting - In the implementation block
@property (nonatomic,retain) NSDate * watchPasscodeAndUnlockedQueryDate;              //@synthesize watchPasscodeAndUnlockedQueryDate=_watchPasscodeAndUnlockedQueryDate - In the implementation block
-(id)initWithWebService:(id)arg1 ;
-(PKPaymentWebService *)webService;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)setWebService:(PKPaymentWebService *)arg1 ;
-(void)setPasscodeConnection:(PUConnection *)arg1 ;
-(void)setSystemSettingsManager:(NSSManager *)arg1 ;
-(void)setPreflighting:(BOOL)arg1 ;
-(void)setPreflightCompletionHandler:(id)arg1 ;
-(void)_checkWatchConnected;
-(void)_checkCompanioniCloudAccount;
-(void)_checkWatchiCloudAccount;
-(void)_checkPasscodeEnabledAndUnlockedState;
-(void)_checkWristDetectEnabledState;
-(void)_finishPresentingSetupControllerIfReadyWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)setWatchConnected:(BOOL)arg1 ;
-(id)_errorForConnectionIssue;
-(void)setNeedsCompanioniCloudAccount:(BOOL)arg1 ;
-(void)setCheckedCompanioniCloudStatus:(BOOL)arg1 ;
-(id)_errorForCompanionAccountNeeded;
-(BOOL)_currentlyPairing;
-(void)setCheckedWatchiCloudStatus:(BOOL)arg1 ;
-(void)setNeedsWatchiCloudAccount:(BOOL)arg1 ;
-(NSSManager *)systemSettingsManager;
-(BOOL)checkedWatchiCloudStatus;
-(void)setCheckedWatchPasscodeAndUnlockedStatus:(BOOL)arg1 ;
-(void)setNeedsPasscode:(BOOL)arg1 ;
-(void)setNeedsUnlock:(BOOL)arg1 ;
-(void)setAuthRandomSetIfNecessary:(BOOL)arg1 ;
-(void)setWatchPasscodeAndUnlockedQueryDate:(NSDate *)arg1 ;
-(PUConnection *)passcodeConnection;
-(BOOL)checkedWatchPasscodeAndUnlockedStatus;
-(BOOL)needsPasscode;
-(BOOL)needsUnlock;
-(void)_setAuthRandomIfNecessary;
-(NSDate *)watchPasscodeAndUnlockedQueryDate;
-(void)setNeedsWristDetection:(BOOL)arg1 ;
-(void)setCheckedWristDetectionStatus:(BOOL)arg1 ;
-(id)_errorForGenericIssue;
-(BOOL)isPreflighting;
-(BOOL)checkedCompanioniCloudStatus;
-(BOOL)checkedWristDetectionStatus;
-(BOOL)needsWatchiCloudAccount;
-(BOOL)needsWristDetection;
-(BOOL)watchConnected;
-(BOOL)authRandomSetIfNecessary;
-(id)_errorForWristDetectNeeded;
-(BOOL)needsCompanioniCloudAccount;
-(id)_errorForGizmoAccountNeeded;
-(id)_errorForPasscodeNeeded;
-(id)_errorForUnlockNeeded;
-(id)preflightCompletionHandler;
@end

