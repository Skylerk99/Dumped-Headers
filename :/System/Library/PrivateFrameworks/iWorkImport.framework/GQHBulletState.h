/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface GQHBulletState : NSObject {

	CFArrayRef mLevels;
	int mCurrentLevel;

}
+(CFStringRef)createLabelStr:(int)arg1 number:(int)arg2 ;
-(int)typeAtlevel:(int)arg1 ;
-(void)setType:(int)arg1 level:(int)arg2 ;
-(void)setNumber:(int)arg1 level:(int)arg2 ;
-(BOOL)hasNumberAtLevel:(int)arg1 ;
-(int)numberAtLevel:(int)arg1 ;
-(void)setLabelType:(int)arg1 level:(int)arg2 ;
-(int)labelTypeAtLevel:(int)arg1 ;
-(void)setBulletChar:(CFStringRef)arg1 level:(int)arg2 ;
-(CFStringRef)bulletChar:(int)arg1 ;
-(void)setBulletIndent:(int)arg1 level:(int)arg2 ;
-(int)bulletIndentForLevel:(int)arg1 ;
-(void)setTextIndent:(int)arg1 level:(int)arg2 ;
-(int)textIndentForLevel:(int)arg1 ;
-(void)setListStyle:(id)arg1 atLevel:(int)arg2 ;
-(id)listStyleAtLevel:(int)arg1 ;
-(CFStringRef)createTieredNumberStringForLevel:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setCurrentLevel:(int)arg1 ;
-(int)currentLevel;
@end

