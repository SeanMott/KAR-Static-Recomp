//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___assert.hpp"



void fn_GObj_AddUserData(PPC::Runtime::GCContext* context)
{
/*80429D0C 00426B0C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80429D10 00426B10*/ PPC::Runtime::ASM::mflr(context->r0);
/*80429D14 00426B14*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80429D18 00426B18*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80429D1C 00426B1C*/ PPC::Runtime::ASM::mr(context->r31, context->r6);
/*80429D20 00426B20*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80429D24 00426B24*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*80429D28 00426B28*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80429D2C 00426B2C*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*80429D30 00426B30*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80429D34 00426B34*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*80429D38 00426B38*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r3));
/*80429D3C 00426B3C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xff);
/*80429D40 00426B40*/ PPC::Runtime::ASM::beq(.L_80429D5C);
/*80429D44 00426B44*/ PPC::Runtime::ASM::lis(context->r3, lbl_80504EB0 @ Get_MemoryOffset_HighBit);
/*80429D48 00426B48*/ PPC::Runtime::ASM::lis(context->r5, String_ "gobj_user_data_kind_EqualTo_HSD_GOBJ_USER_DATA_NON" Get_MemoryOffset_HighBit);
/*80429D4C 00426B4C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80504EB0 @ Get_MemoryOffset_LowBit);
/*80429D50 00426B50*/ PPC::Runtime::ASM::li(context->r4, 0x28);
/*80429D54 00426B54*/ PPC::Runtime::ASM::addi(context->r5, context->r5, String_ "gobj_user_data_kind_EqualTo_HSD_GOBJ_USER_DATA_NON" Get_MemoryOffset_LowBit);
/*80429D58 00426B58*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80429D5C, 0x80429D5C) //this is a jump label
/*80429D5C 00426B5C*/ PPC::Runtime::ASM::stb(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r28));
/*80429D60 00426B60*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*80429D64 00426B64*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r28));
/*80429D68 00426B68*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80429D6C 00426B6C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80429D70 00426B70*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80429D74 00426B74*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80429D78 00426B78*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80429D7C 00426B7C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80429D80 00426B80*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80429D84 00426B84*/ PPC::Runtime::ASM::blr();
}