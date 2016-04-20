/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Library/MobileSubstrate/DynamicLibraries/Flex.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSNumber;

@interface FYPatch : NSObject {

	BOOL _isOn;
	NSString* _label;
	NSMutableArray* _units;
	NSString* _appIdentifier;
	NSString* _UUID;
	NSString* _cloudDescription;
	NSString* _author;
	NSNumber* _downloadDate;

}

@property (retain) NSString * label;                         //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) BOOL isOn;                      //@synthesize isOn=_isOn - In the implementation block
@property (retain) NSMutableArray * units;                   //@synthesize units=_units - In the implementation block
@property (retain) NSString * appIdentifier;                 //@synthesize appIdentifier=_appIdentifier - In the implementation block
@property (retain) NSString * UUID;                          //@synthesize UUID=_UUID - In the implementation block
@property (retain) NSString * cloudDescription;              //@synthesize cloudDescription=_cloudDescription - In the implementation block
@property (retain) NSString * author;                        //@synthesize author=_author - In the implementation block
@property (retain) NSNumber * downloadDate;                  //@synthesize downloadDate=_downloadDate - In the implementation block
-(NSString *)cloudDescription;
-(void)setCloudDescription:(NSString *)arg1 ;
-(NSNumber *)downloadDate;
-(void)setDownloadDate:(NSNumber *)arg1 ;
-(void)setIsOn:(BOOL)arg1 ;
-(BOOL)addNewUnitWithCMethod:(id)arg1 ;
-(BOOL)unitWithMethodExists:(id)arg1 ;
-(BOOL)addNewUnitWithMethod:(id)arg1 ;
-(void)setUnits:(NSMutableArray *)arg1 ;
-(NSMutableArray *)units;
-(void)save;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)UUID;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(BOOL)isOn;
-(id)dictRepresentation;
-(NSString *)appIdentifier;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(void)setAuthor:(NSString *)arg1 ;
-(NSString *)author;
-(void)setUUID:(NSString *)arg1 ;
-(id)generateUUID;
-(id)initWithApplication:(id)arg1 ;
@end

