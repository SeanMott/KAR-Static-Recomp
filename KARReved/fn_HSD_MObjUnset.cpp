//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_TObjSetup_ParseDatFile_ImageStructure.hpp"



void fn_HSD_MObjUnset(PPC::Runtime::GCContext* context)
{
/*803FAD5C 003F7B5C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803FAD60 003F7B60*/ PPC::Runtime::ASM::mflr(context->r0);
/*803FAD64 003F7B64*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803FAD68 003F7B68*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803FAD6C 003F7B6C*/ PPC::Runtime::ASM::bl(fn_HSD_TObjSetup_ParseDatFile_ImageStructure);
/*803FAD70 003F7B70*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803FAD74 003F7B74*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803FAD78 003F7B78*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803FAD7C 003F7B7C*/ PPC::Runtime::ASM::blr();
}