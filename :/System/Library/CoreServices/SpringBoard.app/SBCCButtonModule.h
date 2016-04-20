/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBCCButtonModuleDelegate;
@interface SBCCButtonModule : NSObject {

	BOOL _enabled;
	BOOL _inoperative;
	id<SBCCButtonModuleDelegate> _delegate;

}

@property (assign,nonatomic) id<SBCCButtonModuleDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                      //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isInoperative,nonatomic) BOOL inoperative;              //@synthesize inoperative=_inoperative - In the implementation block
+(BOOL)enabledByDefault;
+(BOOL)isSupported:(int)arg1 ;
+(id)identifier;
+(id)displayName;
-(id)aggdKey;
-(BOOL)_toggleState;
-(id)glyphImageForState:(int)arg1 ;
-(void)cooldown;
-(void)setInoperative:(BOOL)arg1 ;
-(id)statusUpdate;
-(id)unavailableText;
-(id)glyphImageForState:(int)arg1 section:(int)arg2 ;
-(BOOL)isInoperative;
-(void)_noteButtonStateDidChange;
-(void)toggleState;
-(void)_noteDisplayPropertiesDidChange;
-(BOOL)needsConfirmation;
-(void)confirmed:(BOOL)arg1 ;
-(id)confirmationAlertMessage;
-(id)confirmationAlertTitle;
-(void)setDelegate:(id<SBCCButtonModuleDelegate>)arg1 ;
-(id)description;
-(id<SBCCButtonModuleDelegate>)delegate;
-(int)state;
-(id)identifier;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)deactivate;
-(void)_updateState;
-(void)activate;
-(id)displayName;
-(void)warmup;
-(BOOL)isRestricted;
@end

