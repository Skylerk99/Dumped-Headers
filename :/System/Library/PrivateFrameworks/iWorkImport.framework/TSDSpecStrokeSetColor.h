/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:36 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDSpecStroke.h>

@class TSUColor;

@interface TSDSpecStrokeSetColor : TSDSpecStroke {

	TSUColor* _color;

}
+(void)saveObject:(id)arg1 toArchive:(SpecStrokeSetColorArchive*)arg2 archiver:(id)arg3 ;
+(id)newFromArchive:(const SpecStrokeSetColorArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveSpecStrokeSetColorToArchive:(SpecStrokeSetColorArchive*)arg1 archiver:(id)arg2 ;
-(id)initSpecStrokeSetColorWithArchive:(const SpecStrokeSetColorArchive*)arg1 unarchiver:(id)arg2 ;
-(id)initWithCurrentProperty:(id)arg1 ;
-(BOOL)canApplyOnObject:(id)arg1 ;
-(id)operationPropertyName;
-(id)strokeModifiedFromStroke:(id)arg1 ;
-(id)apply:(id)arg1 ;
@end

