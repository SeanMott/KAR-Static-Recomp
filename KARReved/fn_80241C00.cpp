//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80241C00(PPC::Runtime::GCContext* context)
{
/*80241C00 0023EA00*/ PPC::Runtime::ASM::mulli(context->r0, context->r4, 0x1c);
/*80241C04 0023EA04*/ PPC::Runtime::ASM::add(context->r6, context->r3, context->r0);
/*80241C08 0023EA08*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r6));
/* 80241C0C 0023EA0C  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*80241C10 0023EA10*/ PPC::Runtime::ASM::beq(.L_80241C38);
/*80241C14 0023EA14*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80241C18 0023EA18*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*80241C1C 0023EA1C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x144, context->r3));
/*80241C20 0023EA20*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80241C24 0023EA24*/ PPC::Runtime::ASM::add(context->r4, context->r3, context->r0);
/*80241C28 0023EA28*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x118, context->r4));
/*80241C2C 0023EA2C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x144, context->r3));
/*80241C30 0023EA30*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*80241C34 0023EA34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x144, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80241C38, 0x80241C38) //this is a jump label
/*80241C38 0023EA38*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r6));
/*80241C3C 0023EA3C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 30, 30);
/*80241C40 0023EA40*/ PPC::Runtime::ASM::beq(.L_80241C68);
/*80241C44 0023EA44*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80241C48 0023EA48*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r6));
/*80241C4C 0023EA4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x170, context->r3));
/*80241C50 0023EA50*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80241C54 0023EA54*/ PPC::Runtime::ASM::add(context->r4, context->r3, context->r0);
/*80241C58 0023EA58*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x144, context->r4));
/*80241C5C 0023EA5C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x170, context->r3));
/*80241C60 0023EA60*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*80241C64 0023EA64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x170, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80241C68, 0x80241C68) //this is a jump label
/*80241C68 0023EA68*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r6));
/*80241C6C 0023EA6C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 29, 29);
/*80241C70 0023EA70*/ PPC::Runtime::ASM::beq(.L_80241C98);
/*80241C74 0023EA74*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80241C78 0023EA78*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r6));
/*80241C7C 0023EA7C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19c, context->r3));
/*80241C80 0023EA80*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80241C84 0023EA84*/ PPC::Runtime::ASM::add(context->r4, context->r3, context->r0);
/*80241C88 0023EA88*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x170, context->r4));
/*80241C8C 0023EA8C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19c, context->r3));
/*80241C90 0023EA90*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*80241C94 0023EA94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19c, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80241C98, 0x80241C98) //this is a jump label
/*80241C98 0023EA98*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80241C9C 0023EA9C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80241CA0 0023EAA0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r6));
/*80241CA4 0023EAA4*/ PPC::Runtime::ASM::blr();
}