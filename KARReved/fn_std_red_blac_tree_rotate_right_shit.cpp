//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_std_red_blac_tree_rotate_right_shit(PPC::Runtime::GCContext* context)
{
/*80288FD0 00285DD0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80288FD4 00285DD4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80288FD8 00285DD8*/ PPC::Runtime::ASM::cmplw(context->r0, context->r3);
/*80288FDC 00285DDC*/ PPC::Runtime::ASM::bne(.L_80288FE4);
/*80288FE0 00285DE0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_80288FE4, 0x80288FE4) //this is a jump label
/*80288FE4 00285DE4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80288FE8 00285DE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80288FEC 00285DEC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80288FF0 00285DF0*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80288FF4 00285DF4*/ PPC::Runtime::ASM::beq(.L_80289008);
/*80288FF8 00285DF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80288FFC 00285DFC*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 31);
/*80289000 00285E00*/ PPC::Runtime::ASM::or(context->r0, context->r3, context->r0);
/*80289004 00285E04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_80289008, 0x80289008) //this is a jump label
/*80289008 00285E08*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8028900C 00285E0C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*80289010 00285E10*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 0, 0, 30);
/*80289014 00285E14*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*80289018 00285E18*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8028901C 00285E1C*/ PPC::Runtime::ASM::clrrwi(context->r4, context->r0, 1);
/*80289020 00285E20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80289024 00285E24*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*80289028 00285E28*/ PPC::Runtime::ASM::bne(.L_80289034);
/*8028902C 00285E2C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80289030 00285E30*/ PPC::Runtime::ASM::b(.L_80289038);
RUNTIME_PPC_JUMP_LABEL(.L_80289034, 0x80289034) //this is a jump label
/*80289034 00285E34*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_80289038, 0x80289038) //this is a jump label
/*80289038 00285E38*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8028903C 00285E3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80289040 00285E40*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 31);
/*80289044 00285E44*/ PPC::Runtime::ASM::or(context->r0, context->r5, context->r0);
/*80289048 00285E48*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8028904C 00285E4C*/ PPC::Runtime::ASM::blr();
}