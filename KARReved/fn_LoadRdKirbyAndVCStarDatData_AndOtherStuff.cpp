//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800CE964.hpp"
#include "fn_800F82EC.hpp"
#include "fn_LoadDatData_RdKirby.hpp"
#include "fn_GetVCStarDatFileName.hpp"
#include "fn_800F2468.hpp"
#include "fn_8024FF94.hpp"
#include "fn_80283D98.hpp"



void fn_LoadRdKirbyAndVCStarDatData_AndOtherStuff(PPC::Runtime::GCContext* context)
{
/*80262BA4 0025F9A4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80262BA8 0025F9A8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80262BAC 0025F9AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80262BB0 0025F9B0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80262BB4 0025F9B4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80262BB8 0025F9B8*/ PPC::Runtime::ASM::bl(fn_800CE964);
/*80262BBC 0025F9BC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80262BC0 0025F9C0*/ PPC::Runtime::ASM::bl(fn_800F82EC);
/*80262BC4 0025F9C4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80262BC8 0025F9C8*/ PPC::Runtime::ASM::bl(fn_LoadDatData_RdKirby);
/*80262BCC 0025F9CC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80262BD0 0025F9D0*/ PPC::Runtime::ASM::bl(fn_GetVCStarDatFileName);
/*80262BD4 0025F9D4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80262BD8 0025F9D8*/ PPC::Runtime::ASM::bl(fn_800F2468);
/*80262BDC 0025F9DC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80262BE0 0025F9E0*/ PPC::Runtime::ASM::bl(fn_8024FF94);
/*80262BE4 0025F9E4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80262BE8 0025F9E8*/ PPC::Runtime::ASM::bl(fn_80283D98);
/*80262BEC 0025F9EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80262BF0 0025F9F0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80262BF4 0025F9F4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80262BF8 0025F9F8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80262BFC 0025F9FC*/ PPC::Runtime::ASM::blr();
}