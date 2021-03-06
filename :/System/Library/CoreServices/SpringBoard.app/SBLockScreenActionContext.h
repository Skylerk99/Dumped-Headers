/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, BBBulletin;

@interface SBLockScreenActionContext : NSObject {

	NSString* _lockLabel;
	NSString* _shortLockLabel;
	/*^block*/id _action;
	NSString* _identifier;
	double _fontSize;
	BOOL _requiresUIUnlock;
	BOOL _deactivateAwayController;
	BOOL _canBypassPinLock;
	BOOL _requiresAuthentication;
	BBBulletin* _bulletin;

}

@property (nonatomic,retain) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * lockLabel;                       //@synthesize lockLabel=_lockLabel - In the implementation block
@property (nonatomic,retain) NSString * shortLockLabel;                  //@synthesize shortLockLabel=_shortLockLabel - In the implementation block
@property (nonatomic,copy) id action;                                    //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) BOOL requiresUIUnlock;                      //@synthesize requiresUIUnlock=_requiresUIUnlock - In the implementation block
@property (assign,nonatomic) BOOL deactivateAwayController;              //@synthesize deactivateAwayController=_deactivateAwayController - In the implementation block
@property (assign,nonatomic) BOOL canBypassPinLock;                      //@synthesize canBypassPinLock=_canBypassPinLock - In the implementation block
@property (nonatomic,readonly) BOOL hasCustomUnlockLabel; 
@property (assign,nonatomic) BOOL requiresAuthentication;                //@synthesize requiresAuthentication=_requiresAuthentication - In the implementation block
@property (assign,nonatomic) BBBulletin * bulletin;                      //@synthesize bulletin=_bulletin - In the implementation block
-(void)setRequiresUIUnlock:(BOOL)arg1 ;
-(void)setDeactivateAwayController:(BOOL)arg1 ;
-(id)initWithLockLabel:(id)arg1 shortLockLabel:(id)arg2 action:(/*^block*/id)arg3 identifier:(id)arg4 ;
-(void)setRequiresAuthentication:(BOOL)arg1 ;
-(BOOL)requiresUIUnlock;
-(BOOL)hasCustomUnlockLabel;
-(void)setLockLabel:(NSString *)arg1 ;
-(void)setShortLockLabel:(NSString *)arg1 ;
-(BOOL)deactivateAwayController;
-(BOOL)requiresAuthentication;
-(void)dealloc;
-(NSString *)identifier;
-(id)action;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setAction:(id)arg1 ;
-(BOOL)canBypassPinLock;
-(void)setCanBypassPinLock:(BOOL)arg1 ;
-(BBBulletin *)bulletin;
-(void)setBulletin:(BBBulletin *)arg1 ;
-(NSString *)lockLabel;
-(NSString *)shortLockLabel;
@end

