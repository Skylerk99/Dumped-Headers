/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:56 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData, NSString, NSMutableArray;

@interface PTPDeviceInfoDataset : NSObject {

	NSMutableData* _content;
	BOOL _dirty;
	unsigned short _standardVersion;
	unsigned _vendorExtensionID;
	unsigned short _vendorExtensionVersion;
	NSString* _vendorExtensionDescription;
	unsigned short _functionalMode;
	NSMutableArray* _operationsSupported;
	NSMutableArray* _eventsSupported;
	NSMutableArray* _devicePropertiesSupported;
	NSMutableArray* _captureFormats;
	NSMutableArray* _imageFormats;
	NSString* _manufacturer;
	NSString* _model;
	NSString* _deviceVersion;
	NSString* _serialNumber;
	BOOL _readOnlyObject;

}
-(void)dealloc;
-(id)init;
-(id)description;
-(id)initWithData:(id)arg1 ;
-(id)model;
-(id)content;
-(void)setModel:(id)arg1 ;
-(void)updateContent;
-(void)setManufacturer:(id)arg1 ;
-(id)manufacturer;
-(id)operationsSupported;
-(unsigned short)standardVersion;
-(id)initWithMutableData:(id)arg1 ;
-(id)devicePropertiesSupported;
-(void)setStandardVersion:(unsigned short)arg1 ;
-(unsigned)vendorExtensionID;
-(void)setVendorExtensionID:(unsigned)arg1 ;
-(unsigned short)vendorExtensionVersion;
-(void)setVendorExtensionVersion:(unsigned short)arg1 ;
-(id)vendorExtensionDescription;
-(void)setVendorExtensionDescription:(id)arg1 ;
-(unsigned short)functionalMode;
-(void)setFunctionalMode:(unsigned short)arg1 ;
-(void)setOperationsSupported:(id)arg1 ;
-(id)eventsSupported;
-(void)setEventsSupported:(id)arg1 ;
-(void)setDevicePropertiesSupported:(id)arg1 ;
-(id)captureFormats;
-(void)setCaptureFormats:(id)arg1 ;
-(id)imageFormats;
-(void)setImageFormats:(id)arg1 ;
-(id)canonicalManufacturer;
-(void)setSerialNumber:(id)arg1 ;
-(void)setContent:(id)arg1 ;
-(id)deviceVersion;
-(void)setDeviceVersion:(id)arg1 ;
-(id)serialNumber;
@end

