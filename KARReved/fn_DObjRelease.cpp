//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_MObjRemove.hpp"
#include "fn_HSD_PObjRemoveAll.hpp"
#include "fn_HSD_AObjRemove.hpp"



void fn_DObjRelease(PPC::Runtime::GCContext* context)
{
/*803F4A58 003F1858*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803F4A5C 003F185C*/ PPC::Runtime::ASM::mflr(context->r0);
/*803F4A60 003F1860*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803F4A64 003F1864*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803F4A68 003F1868*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*803F4A6C 003F186C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*803F4A70 003F1870*/ PPC::Runtime::ASM::bl(fn_HSD_MObjRemove);
/*803F4A74 003F1874*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*803F4A78 003F1878*/ PPC::Runtime::ASM::bl(fn_HSD_PObjRemoveAll);
/*803F4A7C 003F187C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*803F4A80 003F1880*/ PPC::Runtime::ASM::bl(fn_HSD_AObjRemove);
/*803F4A84 003F1884*/ PPC::Runtime::ASM::lis(context->r4, lbl_80501D10 @ Get_MemoryOffset_HighBit);
/*803F4A88 003F1888*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803F4A8C 003F188C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_80501D10 @ Get_MemoryOffset_LowBit);
/*803F4A90 003F1890*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*803F4A94 003F1894*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r4));
/*803F4A98 003F1898*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803F4A9C 003F189C*/ PPC::Runtime::ASM::bctrl();
/*803F4AA0 003F18A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803F4AA4 003F18A4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803F4AA8 003F18A8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803F4AAC 003F18AC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803F4AB0 003F18B0*/ PPC::Runtime::ASM::blr();
}