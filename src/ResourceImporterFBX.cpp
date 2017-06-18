#include "ResourceImporterFBX.h"
#include <godot.h>

#include <core/Godot.hpp>
#include <core/GodotGlobal.hpp>

#include <ResourceSaver.hpp>
#include <Mesh.hpp>
#include <SurfaceTool.hpp>

#include <Reference.hpp>

using namespace godot;

String ResourceImporterFBX::get_importer_name() const
{
	return "fbx_mesh";
}

String ResourceImporterFBX::get_visible_name() const
{
	return "FBX As Mesh";
}

int ResourceImporterFBX::get_preset_count() const
{
	return 0;
}

String ResourceImporterFBX::get_preset_name(const int preset) const
{
	return String();
}

Array ResourceImporterFBX::get_recognized_extensions() const
{
	Array recognized = Array();
	recognized.push_back("fbx");
	return recognized;
}

Array ResourceImporterFBX::get_import_options(const int preset) const
{
	return Array();
}

String ResourceImporterFBX::get_save_extension() const
{
	return "mesh";
}

String ResourceImporterFBX::get_resource_type() const
{
	return "ArrayMesh";
}

bool ResourceImporterFBX::get_option_visibility(const String option, const Dictionary options) const
{
	return true;
}

int ResourceImporterFBX::import(const String source_file, const String save_path, const Dictionary options, const Array r_platform_variants, const Array r_gen_files)
{
	return 0;
}

void ResourceImporterFBX::_register_methods() {
	//register_method("get_importer_name", &ResourceImporterFBX::get_importer_name);
	//register_method("get_visible_name", &ResourceImporterFBX::get_visible_name);
	//register_method("get_preset_count", &ResourceImporterFBX::get_preset_count);
	//register_method("get_preset_name", &ResourceImporterFBX::get_preset_name);
	//register_method("get_recognized_extensions", &ResourceImporterFBX::get_recognized_extensions);
	//register_method("get_import_options", &ResourceImporterFBX::get_import_options);
	//register_method("get_save_extension", &ResourceImporterFBX::get_save_extension);
	//register_method("get_resource_type", &ResourceImporterFBX::get_resource_type);
	//register_method("get_option_visibility", &ResourceImporterFBX::get_option_visibility);
	//register_method("import", &ResourceImporterFBX::import);
}
