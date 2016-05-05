//
//  BluetoothNavControllerExtension.c
//  BluetoothNavControllerExtension
//
//  Created by Alexandre NGUYEN on 05/05/16.
//  Copyright © 2016 Alexandre NGUYEN. All rights reserved.
//

#include <mach/mach_types.h>

kern_return_t BluetoothNavControllerExtension_start(kmod_info_t * ki, void *d);
kern_return_t BluetoothNavControllerExtension_stop(kmod_info_t *ki, void *d);

kern_return_t BluetoothNavControllerExtension_start(kmod_info_t * ki, void *d)
{
    return KERN_SUCCESS;
}

kern_return_t BluetoothNavControllerExtension_stop(kmod_info_t *ki, void *d)
{
    return KERN_SUCCESS;
}
