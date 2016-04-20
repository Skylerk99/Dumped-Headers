/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:03 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOVoltaireRasterTileTrafficSegment : NSObject {

	SCD_Struct_GE94* _vertices;
	long long _vertexCount;
	BOOL _hasSpeed;
	int _speed;
	BOOL _hasWidth;
	int _width;

}

@property (nonatomic,readonly) SCD_Struct_GE94* vertices;              //@synthesize vertices=_vertices - In the implementation block
@property (nonatomic,readonly) long long vertexCount;                  //@synthesize vertexCount=_vertexCount - In the implementation block
@property (assign,nonatomic) BOOL hasSpeed;                            //@synthesize hasSpeed=_hasSpeed - In the implementation block
@property (assign,nonatomic) int speed;                                //@synthesize speed=_speed - In the implementation block
@property (assign,nonatomic) BOOL hasWidth;                            //@synthesize hasWidth=_hasWidth - In the implementation block
@property (assign,nonatomic) int width;                                //@synthesize width=_width - In the implementation block
-(void)setSpeed:(int)arg1 ;
-(int)speed;
-(int)width;
-(void)setWidth:(int)arg1 ;
-(void)setHasWidth:(BOOL)arg1 ;
-(BOOL)hasWidth;
-(void)setHasSpeed:(BOOL)arg1 ;
-(long long)vertexCount;
-(SCD_Struct_GE94*)vertices;
-(void)setVertices:(SCD_Struct_GE94*)arg1 count:(long long)arg2 ;
-(BOOL)hasSpeed;
@end

