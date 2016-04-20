/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:41 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTWPSelection.h>

@interface TSTWPFormulaSelection : TSTWPSelection {

	unsigned long long mActiveTokenCharIndex;

}

@property (assign,nonatomic) unsigned long long activeTokenCharIndex; 
+(Class)archivedSelectionClass;
-(id)initWithType:(int)arg1 range:(NSRange)arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4 smartFieldRange:(NSRange)arg5 leadingEdge:(BOOL)arg6 leadingCharIndex:(unsigned long long)arg7 activeTokenCharIndex:(unsigned long long)arg8 ;
-(id)initWithType:(int)arg1 range:(NSRange)arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4 smartFieldRange:(NSRange)arg5 leadingEdge:(BOOL)arg6 leadingCharIndex:(unsigned long long)arg7 ;
-(unsigned long long)activeTokenCharIndex;
-(void)setActiveTokenCharIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)compare:(id)arg1 ;
@end

