#include "Software.h"

Software::Software()
{
	this->Architecture = Arch_e::UnKnown;
}

Software::Software(const std::wstring& displayName, const std::wstring& version, const std::wstring& installLocation, const std::wstring& icon, const Arch_e& architecture)
	: DisplayName(displayName), Version(version), InstallLocation(installLocation), Icon(icon), Architecture(architecture)
{

}

Software::~Software()
{

}
