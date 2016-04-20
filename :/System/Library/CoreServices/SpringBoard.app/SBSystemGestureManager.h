/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class FBSDisplay, NSMutableDictionary, NSMutableSet, NSString;

@interface SBSystemGestureManager : NSObject <BSDescriptionProviding> {

	FBSDisplay* _display;
	NSMutableDictionary* _typeToGesture;
	NSMutableDictionary* _typeToState;
	NSMutableSet* _recognizingGestures;
	BOOL _systemGesturesDisabledForAccessibility;

}

@property (getter=isAnyGestureRunning,nonatomic,readonly) BOOL anyGestureRunning; 
@property (nonatomic,retain,readonly) FBSDisplay * display; 
@property (assign,getter=areSystemGesturesDisabledForAccessibility,nonatomic) BOOL systemGesturesDisabledForAccessibility;              //@synthesize systemGesturesDisabledForAccessibility=_systemGesturesDisabledForAccessibility - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mainDisplayManager;
-(void)updateUserPreferences;
-(BOOL)isAnyGestureRunning;
-(BOOL)areSystemGesturesDisabledForAccessibility;
-(void)setSystemGesturesDisabledForAccessibility:(BOOL)arg1 ;
-(void)addGestureRecognizer:(id)arg1 withType:(unsigned long long)arg2 ;
-(BOOL)isGestureWithTypeAllowed:(unsigned long long)arg1 ;
-(void)_updateUserPreferences;
-(BOOL)_isGestureWithTypeAllowed:(unsigned long long)arg1 ;
-(BOOL)_shouldEnableSystemGestureWithType:(unsigned long long)arg1 ;
-(void)_disableSystemGesture:(id)arg1 withType:(unsigned long long)arg2 ;
-(void)_enableSystemGesture:(id)arg1 withType:(unsigned long long)arg2 ;
-(void)_systemGestureChanged:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)removeGestureRecognizer:(id)arg1 ;
-(FBSDisplay *)display;
-(id)initWithDisplay:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

