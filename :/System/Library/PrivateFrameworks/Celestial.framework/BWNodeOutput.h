/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:32 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BWNodeOutputConsumer;
#import <Celestial/Celestial-Structs.h>
@class NSString, BWFormatRequirements, BWFormat, BWPixelBufferPool, BWNode, BWNodeConnection, BWVideoFormat;

@interface BWNodeOutput : NSObject {

	NSString* _name;
	id<BWNodeOutputConsumer> _consumer;
	BOOL _consumerIsANodeConnection;
	BOOL _mediaTypeIsVideo;
	BWFormatRequirements* _formatRequirements;
	BWFormat* _format;
	long long _configurationID;
	BWPixelBufferPool* _preparedPixelBufferPool;
	unsigned long long _preparedBufferPoolSize;
	BWPixelBufferPool* _livePixelBufferPool;
	unsigned long long _livePixelBufferPoolSize;
	unsigned _mediaType;
	BWNode* _node;
	BOOL _providesPixelBufferPool;
	int _passthroughMode;
	int _indexOfInputWhichDrivesThisOutput;
	unsigned long long _retainedBufferCount;
	unsigned long long _owningNodeRetainedBufferCount;
	float _maxSampleDataOutputRate;
	BOOL _dropsSampleBuffersWithUnexpectedPTS;
	BWFormat* _liveFormat;
	long long _liveConfigurationID;
	BOOL _discardsSampleData;
	unsigned _numberOfBuffersEmitted;
	unsigned _numberOfBuffersDropped;
	SCD_Struct_BW2 _lastValidPTS;
	SCD_Struct_BW2 _lastEmittedPTS;

}

@property (nonatomic,copy) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned mediaType;                                          //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) BWNode * node;                                               //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) id<BWNodeOutputConsumer> consumer; 
@property (nonatomic,readonly) BWNodeConnection * connection; 
@property (nonatomic,copy) BWFormatRequirements * formatRequirements; 
@property (nonatomic,copy) BWFormat * format; 
@property (nonatomic,readonly) BWVideoFormat * videoFormat; 
@property (assign,nonatomic) long long configurationID;                                     //@synthesize configurationID=_configurationID - In the implementation block
@property (assign,nonatomic) BOOL providesPixelBufferPool;                                  //@synthesize providesPixelBufferPool=_providesPixelBufferPool - In the implementation block
@property (nonatomic,readonly) BWPixelBufferPool * preparedPixelBufferPool;                 //@synthesize preparedPixelBufferPool=_preparedPixelBufferPool - In the implementation block
@property (assign,nonatomic) int passthroughMode;                                           //@synthesize passthroughMode=_passthroughMode - In the implementation block
@property (assign,nonatomic) BOOL buffersOriginateUpstream; 
@property (assign,nonatomic) int indexOfInputWhichDrivesThisOutput;                         //@synthesize indexOfInputWhichDrivesThisOutput=_indexOfInputWhichDrivesThisOutput - In the implementation block
@property (assign,nonatomic) unsigned long long retainedBufferCount;                        //@synthesize retainedBufferCount=_retainedBufferCount - In the implementation block
@property (assign,nonatomic) unsigned long long owningNodeRetainedBufferCount;              //@synthesize owningNodeRetainedBufferCount=_owningNodeRetainedBufferCount - In the implementation block
@property (assign,nonatomic) float maxSampleDataOutputRate;                                 //@synthesize maxSampleDataOutputRate=_maxSampleDataOutputRate - In the implementation block
@property (assign,nonatomic) BOOL dropsSampleBuffersWithUnexpectedPTS;                      //@synthesize dropsSampleBuffersWithUnexpectedPTS=_dropsSampleBuffersWithUnexpectedPTS - In the implementation block
@property (nonatomic,retain) BWFormat * liveFormat;                                         //@synthesize liveFormat=_liveFormat - In the implementation block
@property (nonatomic,readonly) long long liveConfigurationID;                               //@synthesize liveConfigurationID=_liveConfigurationID - In the implementation block
@property (nonatomic,readonly) BWPixelBufferPool * livePixelBufferPool; 
@property (assign,nonatomic) BOOL discardsSampleData;                                       //@synthesize discardsSampleData=_discardsSampleData - In the implementation block
@property (nonatomic,readonly) unsigned numberOfBuffersEmitted;                             //@synthesize numberOfBuffersEmitted=_numberOfBuffersEmitted - In the implementation block
@property (nonatomic,readonly) unsigned numberOfBuffersDropped;                             //@synthesize numberOfBuffersDropped=_numberOfBuffersDropped - In the implementation block
+(void)initialize;
-(void)setRetainedBufferCount:(unsigned long long)arg1 ;
-(unsigned)mediaType;
-(BWFormat *)format;
-(void)setFormat:(BWFormat *)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)invalidate;
-(void)setConsumer:(id<BWNodeOutputConsumer>)arg1 ;
-(BWNode *)node;
-(id<BWNodeOutputConsumer>)consumer;
-(BWNodeConnection *)connection;
-(id)initWithMediaType:(unsigned)arg1 node:(id)arg2 ;
-(void)makeConfiguredFormatLive;
-(void)markEndOfLiveOutput;
-(void)emitSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BWVideoFormat *)videoFormat;
-(void)setFormatRequirements:(BWFormatRequirements *)arg1 ;
-(void)setProvidesPixelBufferPool:(BOOL)arg1 ;
-(void)setLiveFormat:(BWFormat *)arg1 ;
-(BWFormatRequirements *)formatRequirements;
-(int)passthroughMode;
-(void)setPassthroughMode:(int)arg1 ;
-(unsigned long long)retainedBufferCount;
-(BWFormat *)liveFormat;
-(long long)liveConfigurationID;
-(unsigned)numberOfBuffersDropped;
-(id)_poolName;
-(void)setNodePreparedPixelBufferPool:(id)arg1 ;
-(void)setBuffersOriginateUpstream:(BOOL)arg1 ;
-(BOOL)buffersOriginateUpstream;
-(void)setPreparedSharedPixelBufferPool:(id)arg1 ;
-(void)prepareForConfiguredFormatToBecomeLive;
-(BWPixelBufferPool *)livePixelBufferPool;
-(void)emitNodeError:(id)arg1 ;
-(void)emitDroppedSample:(id)arg1 ;
-(void)emitIrisReferenceMovieRequestWithInfo:(id)arg1 ;
-(BOOL)providesPixelBufferPool;
-(BWPixelBufferPool *)preparedPixelBufferPool;
-(int)indexOfInputWhichDrivesThisOutput;
-(void)setIndexOfInputWhichDrivesThisOutput:(int)arg1 ;
-(unsigned long long)owningNodeRetainedBufferCount;
-(void)setOwningNodeRetainedBufferCount:(unsigned long long)arg1 ;
-(float)maxSampleDataOutputRate;
-(void)setMaxSampleDataOutputRate:(float)arg1 ;
-(BOOL)dropsSampleBuffersWithUnexpectedPTS;
-(void)setDropsSampleBuffersWithUnexpectedPTS:(BOOL)arg1 ;
-(BOOL)discardsSampleData;
-(void)setDiscardsSampleData:(BOOL)arg1 ;
-(unsigned)numberOfBuffersEmitted;
-(void)setConfigurationID:(long long)arg1 ;
-(long long)configurationID;
@end

