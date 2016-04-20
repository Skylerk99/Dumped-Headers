/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:38 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OADColor;

@interface OADGradientFillStop : NSObject <NSCopying> {

	OADColor* mColor;
	float mPosition;

}
+(void)addStopWithColor:(id)arg1 position:(float)arg2 toArray:(id)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)position;
-(id)color;
-(void)setStyleColor:(id)arg1 ;
-(BOOL)usesPlaceholderColor;
-(id)initWithColor:(id)arg1 position:(float)arg2 ;
@end

