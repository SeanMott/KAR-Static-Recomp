//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80347B04(PPC::Runtime::GCContext* context)
{
/*80347B04 00344904*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80347B08 00344908*/ PPC::Runtime::ASM::mflr(context->r0);
/*80347B0C 0034490C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80347B10 00344910*/ PPC::Runtime::ASM::li(context->r5, lbl_805DB1C0 @ Get_MemoryOffset_SDA21);
/*80347B14 00344914*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80347B18 00344918*/ PPC::Runtime::ASM::li(context->r6, lbl_805DB1B8 @ Get_MemoryOffset_SDA21);
/*80347B1C 0034491C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80347B20 00344920*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80347B24 00344924*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80347B28 00344928*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*80347B2C 0034492C*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f1);
/*80347B30 00344930*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*80347B34 00344934*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80347B38 00344938*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80347B3C 0034493C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80347B40 00344940*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E92B4 @ Get_MemoryOffset_HighBit);
/*80347B44 00344944*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804E92B4 @ Get_MemoryOffset_LowBit);
/*80347B48 00344948*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*80347B4C 0034494C*/ PPC::Runtime::ASM::bne(.L_80347B58);
/*80347B50 00344950*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E91EC @ Get_MemoryOffset_HighBit);
/*80347B54 00344954*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804E91EC @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_80347B58, 0x80347B58) //this is a jump label
/*80347B58 00344958*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*80347B5C 0034495C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*80347B60 00344960*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*80347B64 00344964*/ PPC::Runtime::ASM::ble(.L_80347B6C);
/*80347B68 00344968*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80347B6C, 0x80347B6C) //this is a jump label
/*80347B6C 0034496C*/ PPC::Runtime::ASM::fneg(context->f1, context->f1);
/*80347B70 00344970*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*80347B74 00344974*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*80347B78 00344978*/ PPC::Runtime::ASM::bge(.L_80347B80);
/*80347B7C 0034497C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80347B80, 0x80347B80) //this is a jump label
/*80347B80 00344980*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80347B84 00344984*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80347B88 00344988*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80347B8C 0034498C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80347B90 00344990*/ PPC::Runtime::ASM::blr();
}