//
//  TripViewController.h
//  University Car Pooling
//
//  Created by Matt McInnes on 18/04/2016.
//  Copyright © 2016 Matt McInnes. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import "LocationService.h"
#import <MessageUI/MessageUI.h>
#import "SWRevealViewController.h"
#import <Parse/Parse.h>

@interface TripViewController : UIViewController <MKMapViewDelegate, MFMessageComposeViewControllerDelegate> {

}

@property (weak, nonatomic) IBOutlet MKMapView *mapView;

@property (nonatomic, strong) LocationService *locationService;

@property (nonatomic, strong, readonly) NSMutableArray *routeLocations;

@property (nonatomic, strong, readonly) MKPolyline *routePolyline;

@property (nonatomic, readonly) MKCoordinateRegion routeRegion;

@property (weak, nonatomic) IBOutlet UIBarButtonItem *barButton;


@end
