/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCH3DDataBuffer : NSObject

@property (nonatomic,readonly) unsigned long long componentByteSize; 
@property (nonatomic,readonly) unsigned long long elementByteSize; 
@property (nonatomic,readonly) unsigned long long byteSize; 
@property (nonatomic,readonly) tvec3<int> size; 
@property (nonatomic,readonly) tvec2<int> size2; 
@property (nonatomic,readonly) BOOL hasLevels; 
-(unsigned long long)byteSize;
-(unsigned long long)elementByteSize;
-(unsigned long long)componentByteSize;
-(DataBufferLevelData*)dataAtLevel:(unsigned long long)arg1 ;
-(tvec2<int>)size2;
-(DataBufferInfo)bufferInfo;
-(DataBufferLevelData*)dataWithSizeGreaterOrEqualTo:(unsigned long long)arg1 ;
-(tvec3<int>)size;
-(id)description;
-(BOOL)hasLevels;
@end

