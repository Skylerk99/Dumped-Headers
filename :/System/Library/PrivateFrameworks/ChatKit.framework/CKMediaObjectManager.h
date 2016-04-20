/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:40 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray, NSDictionary;

@interface CKMediaObjectManager : NSObject {

	NSMutableDictionary* _transfers;
	NSArray* _classes;
	NSDictionary* _UTITypes;
	NSDictionary* _dynTypes;

}

@property (nonatomic,copy) NSArray * classes;                              //@synthesize classes=_classes - In the implementation block
@property (nonatomic,copy) NSDictionary * UTITypes;                        //@synthesize UTITypes=_UTITypes - In the implementation block
@property (nonatomic,copy) NSDictionary * dynTypes;                        //@synthesize dynTypes=_dynTypes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * transfers;              //@synthesize transfers=_transfers - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(NSDictionary *)UTITypes;
-(Class)classForFilename:(id)arg1 ;
-(id)mediaObjectWithFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 ;
-(id)mediaObjectWithData:(id)arg1 UTIType:(id)arg2 filename:(id)arg3 transcoderUserInfo:(id)arg4 ;
-(id)mediaObjectWithTransferGUID:(id)arg1 imMessage:(id)arg2 ;
-(id)UTITypeForFilename:(id)arg1 ;
-(Class)classForUTIType:(id)arg1 ;
-(NSArray *)classes;
-(void)setTransfers:(NSMutableDictionary *)arg1 ;
-(void)setClasses:(NSArray *)arg1 ;
-(void)setUTITypes:(NSDictionary *)arg1 ;
-(void)setDynTypes:(NSDictionary *)arg1 ;
-(void)transferRemoved:(id)arg1 ;
-(NSDictionary *)dynTypes;
-(id)UTITypeForExtension:(id)arg1 ;
-(NSMutableDictionary *)transfers;
-(id)transferWithTransferGUID:(id)arg1 imMessage:(id)arg2 ;
-(id)transferWithFileURL:(id)arg1 transcoderUserInfo:(id)arg2 ;
-(Class)transferClass;
-(id)fileManager;
@end

