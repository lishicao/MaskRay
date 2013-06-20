/*
 * $File: raytracer_conf.hh
 * $Date: Wed Jun 19 23:04:56 2013 +0800
 * $Author: Xinyu Zhou <zxytim[at]gmail[dot]com>
 */

#pragma once

#include "type.hh"

class RayTracerConf
{
	public:
		real_t STOP_ENERGY_THRESHOLD,
			   TRACE_DEPTH_MAX;

		RayTracerConf() :
			STOP_ENERGY_THRESHOLD(0.01),
			TRACE_DEPTH_MAX(10)
		{}
};

/**
 * vim: syntax=cpp11 foldmethod=marker
 */

