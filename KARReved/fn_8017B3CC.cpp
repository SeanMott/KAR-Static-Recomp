//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80131284.hpp"
#include "fn_80059520.hpp"



void fn_8017B3CC(PPC::Runtime::GCContext* context)
{
/*8017B3CC 001781CC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8017B3D0 001781D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8017B3D4 001781D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8017B3D8 001781D8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8017B3DC 001781DC*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8017B3E0 001781E0*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0xeac);
/*8017B3E4 001781E4*/ PPC::Runtime::ASM::bl(fn_80131284);
/*8017B3E8 001781E8*/ PPC::Runtime::ASM::lis(context->r5, lbl_804AD178 @ Get_MemoryOffset_HighBit);
/*8017B3EC 001781EC*/ PPC::Runtime::ASM::lis(context->r4, lbl_804AD194 @ Get_MemoryOffset_HighBit);
/*8017B3F0 001781F0*/ PPC::Runtime::ASM::addi(context->r7, context->r4, lbl_804AD194 @ Get_MemoryOffset_LowBit);
/*8017B3F4 001781F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8017B3F8 001781F8*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804AD178 @ Get_MemoryOffset_LowBit);
/*8017B3FC 001781FC*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8017B400 00178200*/ PPC::Runtime::ASM::addi(context->r6, context->r31, 0x4);
/*8017B404 00178204*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8017B408 00178208*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8017B40C 0017820C*/ PPC::Runtime::ASM::bl(fn_80059520);
/*8017B410 00178210*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8017B414 00178214*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8017B418 00178218*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8017B41C 0017821C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8017B420 00178220*/ PPC::Runtime::ASM::blr();
}