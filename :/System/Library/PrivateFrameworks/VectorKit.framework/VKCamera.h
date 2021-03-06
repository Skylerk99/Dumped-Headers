/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:38 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VKCameraDelegate;
#import <VectorKit/VectorKit-Structs.h>
@class VKViewVolume, VKFootprint;

@interface VKCamera : NSObject {

	id<VKCameraDelegate> _delegate;
	VKPoint _position;
	SCD_Struct_VK6 _orientation;
	float _aspectRatio;
	float _verticalFieldOfView;
	VKPoint _puckPosition;
	SCD_Struct_VK7 _frustum;
	double _minHeight;
	double _maxHeight;
	double _maxPitch;
	double _terrainHeight;
	double _maxFarClipDistance;
	BOOL _needsUpdate;
	BOOL _updating;
	int _updateNumber;
	SCD_Struct_VK6 _viewProjectionMatrix;
	SCD_Struct_VK6 _projectionMatrix;
	SCD_Struct_VK6 _viewMatrix;
	SCD_Struct_VK6 _viewMatrixUnscaled;
	SCD_Struct_VK6 _projectionMatrixUnscaled;
	SCD_Struct_VK6 _projectionMatrixUnscaledWithoutOffset;
	SCD_Struct_VK6 _viewProjectionMatrixUnscaled;
	SCD_Struct_VK6 _worldMatrix;
	VKViewVolume* _viewVolume;
	VKFootprint* _footprint;
	double _tanHalfHorizFOV;
	double _tanHalfVerticalFOV;
	Matrix<double, 3, 1> _forward;
	Matrix<double, 3, 1> _right;
	Matrix<double, 3, 1> _up;
	double _fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
	double _distanceToGroundAndFarClipPlaneIntersection;
	double _screenHeightOfGroundAndFarClipPlaneIntersection;
	BOOL _allowDatelineWraparound;
	double _canonicalPitch;
	double _horizontalOffset;
	Matrix<double, 3, 1> _gmPosition;
	Matrix<double, 4, 4> _gmViewMatrix;
	Matrix<double, 4, 4> _gmUnscaledViewMatrix;
	Matrix<double, 4, 4> _gmProjectionMatrix;
	Matrix<double, 4, 4> _gmViewProjectionMatrix;
	Matrix<double, 4, 4> _gmViewProjectionMatrixWithoutOffset;
	Matrix<double, 4, 4> _gmWorldMatrix;
	double _maxHeightNoPitch;

}

@property (nonatomic,readonly) const Matrix<double* gmPosition; 
@property (nonatomic,readonly) const Matrix<double* gmViewProjectionMatrix; 
@property (nonatomic,readonly) const Matrix<double* gmProjectionMatrix; 
@property (nonatomic,readonly) const Matrix<double* gmViewMatrix; 
@property (nonatomic,readonly) const Matrix<double* gmUnscaledViewMatrix; 
@property (nonatomic,readonly) const Matrix<double* gmViewProjectionMatrixWithoutOffset; 
@property (nonatomic,readonly) Matrix<double gmUpVector; 
@property (nonatomic,readonly) Matrix<double gmRightVector; 
@property (nonatomic,readonly) Matrix<double gmForwardVector; 
@property (nonatomic,readonly) SCD_Struct_VK7 frustum;                                                   //@synthesize frustum=_frustum - In the implementation block
@property (assign,nonatomic) VKPoint position;                                                           //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) VKPoint puckPosition;                                                       //@synthesize puckPosition=_puckPosition - In the implementation block
@property (assign,nonatomic) const SCD_Struct_VK6* orientation; 
@property (assign,nonatomic) float aspectRatio;                                                          //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (nonatomic,readonly) float horizontalFieldOfView; 
@property (assign,nonatomic) float verticalFieldOfView; 
@property (nonatomic,readonly) double farClipDistance; 
@property (nonatomic,readonly) double nearClipDistance; 
@property (assign,nonatomic) VKCameraState cameraState; 
@property (nonatomic,readonly) int updateNumber;                                                         //@synthesize updateNumber=_updateNumber - In the implementation block
@property (assign,nonatomic) double minHeight;                                                           //@synthesize minHeight=_minHeight - In the implementation block
@property (assign,nonatomic) double maxHeight;                                                           //@synthesize maxHeight=_maxHeight - In the implementation block
@property (assign,nonatomic) double maxHeightNoPitch;                                                    //@synthesize maxHeightNoPitch=_maxHeightNoPitch - In the implementation block
@property (assign,nonatomic) double maxPitch;                                                            //@synthesize maxPitch=_maxPitch - In the implementation block
@property (assign,nonatomic) double terrainHeight;                                                       //@synthesize terrainHeight=_terrainHeight - In the implementation block
@property (nonatomic,readonly) const SCD_Struct_VK6* viewProjectionMatrix; 
@property (nonatomic,readonly) const SCD_Struct_VK6* projectionMatrix; 
@property (nonatomic,readonly) const SCD_Struct_VK6* viewMatrix; 
@property (nonatomic,readonly) const SCD_Struct_VK6* viewProjectionMatrixUnscaled; 
@property (nonatomic,readonly) const SCD_Struct_VK6* projectionMatrixUnscaled; 
@property (nonatomic,readonly) const SCD_Struct_VK6* projectionMatrixUnscaledWithoutOffset; 
@property (nonatomic,readonly) const SCD_Struct_VK6* viewMatrixUnscaled; 
@property (nonatomic,readonly) const SCD_Struct_VK6* worldMatrix; 
@property (nonatomic,readonly) VKViewVolume * viewVolume; 
@property (nonatomic,readonly) VKFootprint * footprint; 
@property (nonatomic,readonly) Matrix<double upVector; 
@property (nonatomic,readonly) Matrix<double rightVector; 
@property (nonatomic,readonly) Matrix<double forwardVector; 
@property (nonatomic,readonly) VKPoint groundPoint; 
@property (nonatomic,readonly) double pitch; 
@property (nonatomic,readonly) double yaw; 
@property (nonatomic,readonly) double tanHalfHorizFOV; 
@property (nonatomic,readonly) double tanHalfVerticalFOV; 
@property (nonatomic,readonly) double distanceToGroundAndFarClipPlaneIntersection;                       //@synthesize distanceToGroundAndFarClipPlaneIntersection=_distanceToGroundAndFarClipPlaneIntersection - In the implementation block
@property (nonatomic,readonly) double screenHeightOfGroundAndFarClipPlaneIntersection;                   //@synthesize screenHeightOfGroundAndFarClipPlaneIntersection=_screenHeightOfGroundAndFarClipPlaneIntersection - In the implementation block
@property (assign,nonatomic) id<VKCameraDelegate> delegate;                                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;                   //@synthesize fractionOfScreenAboveFarClipPlaneAtCanonicalPitch=_fractionOfScreenAboveFarClipPlaneAtCanonicalPitch - In the implementation block
@property (assign,nonatomic) BOOL allowDatelineWraparound;                                               //@synthesize allowDatelineWraparound=_allowDatelineWraparound - In the implementation block
@property (assign,nonatomic) double canonicalPitch;                                                      //@synthesize canonicalPitch=_canonicalPitch - In the implementation block
@property (assign,nonatomic) double horizontalOffset;                                                    //@synthesize horizontalOffset=_horizontalOffset - In the implementation block
-(Matrix<double)gmRightVector;
-(Matrix<double, 3, 1>)gmGroundPointFromScreenPoint:(CGPoint)arg1 atGroundLevel:(double)arg2 ;
-(const Matrix<double*)gmProjectionMatrix;
-(const Matrix<double*)gmViewProjectionMatrix;
-(const Matrix<double*)gmPosition;
-(const Matrix<double*)gmViewProjectionMatrixWithoutOffset;
-(Matrix<double)gmForwardVector;
-(Matrix<double, 3, 1>)gmGroundPointFromScreenPoint:(CGPoint)arg1 ;
-(const Matrix<double*)gmUnscaledViewMatrix;
-(const Matrix<double*)gmViewMatrix;
-(Matrix<double)gmUpVector;
-(/*^block*/id)annotationRectTest;
-(double)yaw;
-(void)setAllowDatelineWraparound:(BOOL)arg1 ;
-(/*^block*/id)annotationCoordinateTest;
-(BOOL)allowDatelineWraparound;
-(void)setNeedsUpdate;
-(void)updateIfNeeded;
-(float)aspectRatio;
-(void)setDelegate:(id<VKCameraDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id<VKCameraDelegate>)delegate;
-(void)setOrientation:(const SCD_Struct_VK6*)arg1 ;
-(const SCD_Struct_VK6*)orientation;
-(void)setPosition:(VKPoint)arg1 ;
-(VKPoint)position;
-(double)minHeight;
-(VKFootprint *)footprint;
-(double)pitch;
-(double)maxHeight;
-(void)_setPosition:(VKPoint)arg1 ;
-(double)tanHalfHorizFOV;
-(VKPoint)groundPoint;
-(double)farClipDistance;
-(int)updateNumber;
-(void)adjustClipPlanes;
-(float)verticalFieldOfView;
-(double)nearClipDistance;
-(void)logCameraState;
-(VKCameraState)cameraState;
-(BOOL)isWorldSpaceRectVisible:(const SCD_Struct_VK10*)arg1 ;
-(const SCD_Struct_VK6*)projectionMatrixUnscaled;
-(double)widthOfViewAtDepth:(double)arg1 ;
-(Matrix<double)forwardVector;
-(double)terrainHeight;
-(const SCD_Struct_VK6*)viewMatrixUnscaled;
-(void)setTerrainHeight:(double)arg1 ;
-(Matrix<double)rightVector;
-(double)canonicalPitch;
-(VKPoint)groundPointFromScreenPoint:(CGPoint)arg1 atGroundLevel:(double)arg2 ;
-(VKViewVolume *)viewVolume;
-(BOOL)hasChangedState:(VKCameraState*)arg1 ;
-(double)depthForViewWidth:(double)arg1 ;
-(const SCD_Struct_VK6*)viewProjectionMatrix;
-(double)horizontalOffset;
-(SCD_Struct_VK7)frustum;
-(const SCD_Struct_VK6*)viewProjectionMatrixUnscaled;
-(VKPoint)groundPointFromScreenPoint:(CGPoint)arg1 ;
-(void)setAspectRatio:(float)arg1 ;
-(BOOL)isOuterWorldBoundsVisible;
-(double)displayZoomLevel;
-(const SCD_Struct_VK6*)worldMatrix;
-(double)maxPitch;
-(void)setHorizontalOffset:(double)arg1 ;
-(void)setMaxPitch:(double)arg1 ;
-(void)setMaxHeight:(double)arg1 ;
-(void)setMaxHeightNoPitch:(double)arg1 ;
-(void)setMinHeight:(double)arg1 ;
-(double)tanHalfVerticalFOV;
-(void)setFractionOfScreenAboveFarClipPlaneAtCanonicalPitch:(double)arg1 ;
-(double)maxHeightNoPitch;
-(double)fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
-(const SCD_Struct_VK6*)projectionMatrixUnscaledWithoutOffset;
-(void)setPuckPosition:(VKPoint)arg1 ;
-(float)horizontalFieldOfView;
-(void)setCanonicalPitch:(double)arg1 ;
-(Matrix<double)upVector;
-(double)screenHeightOfGroundAndFarClipPlaneIntersection;
-(double)distanceToGroundAndFarClipPlaneIntersection;
-(float)maximumStyleZForRect:(const SCD_Struct_VK10*)arg1 ;
-(VKPoint)puckPosition;
-(const SCD_Struct_VK6*)viewMatrix;
-(const SCD_Struct_VK6*)projectionMatrix;
-(void)setVerticalFieldOfView:(float)arg1 ;
-(void)setCameraState:(VKCameraState)arg1 ;
-(VKPoint)groundPlaneIntersectionPoint;
@end

