//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138BA4.hpp"



void fn_80172FAC(PPC::Runtime::GCContext* context)
{
/*80172FAC 0016FDAC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80172FB0 0016FDB0*/ PPC::Runtime::ASM::mflr(context->r0);
/*80172FB4 0016FDB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80172FB8 0016FDB8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80172FBC 0016FDBC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80172FC0 0016FDC0*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80172FC4 0016FDC4*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*80172FC8 0016FDC8*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80172FCC 0016FDCC*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80172FD0 0016FDD0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcb4, context->r3));
/*80172FD4 0016FDD4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80172FD8 0016FDD8*/ PPC::Runtime::ASM::beq(.L_80173004);
/*80172FDC 0016FDDC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80172FE0 0016FDE0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80172FE4 0016FDE4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*80172FE8 0016FDE8*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*80172FEC 0016FDEC*/ PPC::Runtime::ASM::ble(.L_80173004);
/*80172FF0 0016FDF0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80172FF4 0016FDF4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0C20 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80172FF8 0016FDF8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*80172FFC 0016FDFC*/ PPC::Runtime::ASM::li(context->r4, 0x46);
/*80173000 0016FE00*/ PPC::Runtime::ASM::bl(fn_80138BA4);
RUNTIME_PPC_JUMP_LABEL(.L_80173004, 0x80173004) //this is a jump label
/*80173004 0016FE04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80173008 0016FE08*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8017300C 0016FE0C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80173010 0016FE10*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80173014 0016FE14*/ PPC::Runtime::ASM::blr();
}