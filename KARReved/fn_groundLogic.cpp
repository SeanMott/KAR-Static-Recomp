//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_groundControl.hpp"
#include "fn_AS_StarWait.hpp"



void fn_groundLogic(PPC::Runtime::GCContext* context)
{
/*801AB554 001A8354*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AB558 001A8358*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AB55C 001A835C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AB560 001A8360*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AB564 001A8364*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801AB568 001A8368*/ PPC::Runtime::ASM::bl(fn_groundControl);
/*801AB56C 001A836C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x394, context->r31));
/*801AB570 001A8370*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E13B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801AB574 001A8374*/ PPC::Runtime::ASM::fcmpu(cr0, context->f0, context->f1);
/*801AB578 001A8378*/ PPC::Runtime::ASM::bne(.L_801AB588);
/*801AB57C 001A837C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x398, context->r31));
/*801AB580 001A8380*/ PPC::Runtime::ASM::fcmpu(cr0, context->f0, context->f1);
/*801AB584 001A8384*/ PPC::Runtime::ASM::beq(.L_801AB590);
RUNTIME_PPC_JUMP_LABEL(.L_801AB588, 0x801AB588) //this is a jump label
/*801AB588 001A8388*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AB58C 001A838C*/ PPC::Runtime::ASM::bl(fn_AS_StarWait);
RUNTIME_PPC_JUMP_LABEL(.L_801AB590, 0x801AB590) //this is a jump label
/*801AB590 001A8390*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AB594 001A8394*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AB598 001A8398*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AB59C 001A839C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AB5A0 001A83A0*/ PPC::Runtime::ASM::blr();
}