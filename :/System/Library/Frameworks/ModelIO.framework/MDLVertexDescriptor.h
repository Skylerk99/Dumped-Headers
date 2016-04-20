/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:10 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface MDLVertexDescriptor : NSObject <NSCopying> {

	NSMutableArray* _attributes;
	NSMutableArray* _layouts;

}

@property (nonatomic,retain) NSMutableArray * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSMutableArray * layouts;                 //@synthesize layouts=_layouts - In the implementation block
-(id)attributeNamed:(id)arg1 ;
-(void)setPackedOffsets;
-(void)setPackedStrides;
-(void)debugPrintToFile:(_sFILE*)arg1 ;
-(id)initWithVertexDescriptor:(id)arg1 ;
-(void)addOrReplaceAttribute:(id)arg1 ;
-(void)setLayouts:(NSMutableArray *)arg1 ;
-(NSMutableArray *)layouts;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)attributes;
-(void)setAttributes:(NSMutableArray *)arg1 ;
@end

