/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:38 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDStroke.h>

@class NSString;

@interface TSDSmartStroke : TSDStroke {

	NSString* mStrokeName;

}

@property (nonatomic,copy) NSString * strokeName; 
+(Class)classForName:(id)arg1 ;
+(id)strokeWithName:(id)arg1 color:(id)arg2 width:(double)arg3 ;
-(void)saveToArchive:(StrokeArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const StrokeArchive*)arg1 unarchiver:(id)arg2 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 context:(id)arg2 ;
-(id)initWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 miterLimit:(double)arg6 ;
-(BOOL)canApplyDirectlyToRepCALayer;
-(BOOL)shouldAntialiasDefeat;
-(id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6 miterLimit:(double)arg7 ;
-(id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)strokeName;
-(void)setStrokeName:(NSString *)arg1 ;
@end

