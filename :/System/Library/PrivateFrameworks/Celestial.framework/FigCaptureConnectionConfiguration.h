/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:32 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/FigXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FigCaptureSourceConfiguration, FigCaptureSinkConfiguration;

@interface FigCaptureConnectionConfiguration : NSObject <FigXPCCoding, NSCopying> {

	NSString* _connectionID;
	unsigned _mediaType;
	FigCaptureSourceConfiguration* _sourceConfiguration;
	FigCaptureSinkConfiguration* _sinkConfiguration;
	BOOL _enabled;

}

@property (nonatomic,copy) NSString * connectionID;                                            //@synthesize connectionID=_connectionID - In the implementation block
@property (assign,nonatomic) unsigned mediaType;                                               //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,retain) FigCaptureSourceConfiguration * sourceConfiguration;              //@synthesize sourceConfiguration=_sourceConfiguration - In the implementation block
@property (nonatomic,retain) FigCaptureSinkConfiguration * sinkConfiguration;                  //@synthesize sinkConfiguration=_sinkConfiguration - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                     //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)setConnectionID:(NSString *)arg1 ;
-(void)setSinkConfiguration:(FigCaptureSinkConfiguration *)arg1 ;
-(FigCaptureSourceConfiguration *)sourceConfiguration;
-(void)setSourceConfiguration:(FigCaptureSourceConfiguration *)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(unsigned)mediaType;
-(void)setMediaType:(unsigned)arg1 ;
-(BOOL)enabled;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FigCaptureSinkConfiguration *)sinkConfiguration;
-(NSString *)connectionID;
@end

