//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_stGetCurrentStageKind_VehicleposId.hpp"



void fn_800DA618(PPC::Runtime::GCContext* context)
{
/*800DA618 000D7418*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800DA61C 000D741C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800DA620 000D7420*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800DA624 000D7424*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800DA628 000D7428*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800DA62C 000D742C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*800DA630 000D7430*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*800DA634 000D7434*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800DA638 000D7438*/ PPC::Runtime::ASM::beq(.L_800DA650);
/*800DA63C 000D743C*/ PPC::Runtime::ASM::bl(fn_stGetCurrentStageKind_VehicleposId);
/*800DA640 000D7440*/ PPC::Runtime::ASM::mulli(context->r3, context->r3, 0xc);
/*800DA644 000D7444*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*800DA648 000D7448*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r3);
/*800DA64C 000D744C*/ PPC::Runtime::ASM::b(.L_800DA654);
RUNTIME_PPC_JUMP_LABEL(.L_800DA650, 0x800DA650) //this is a jump label
/*800DA650 000D7450*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800DA654, 0x800DA654) //this is a jump label
/*800DA654 000D7454*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800DA658 000D7458*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800DA65C 000D745C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800DA660 000D7460*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800DA664 000D7464*/ PPC::Runtime::ASM::blr();
}