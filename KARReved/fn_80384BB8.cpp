//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80384CC8.hpp"
#include "fn_8029B1A8.hpp"



void fn_80384BB8(PPC::Runtime::GCContext* context)
{
/*80384BB8 003819B8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80384BBC 003819BC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80384BC0 003819C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80384BC4 003819C4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80384BC8 003819C8*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*80384BCC 003819CC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80384BD0 003819D0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD95C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80384BD4 003819D4*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80384BD8 003819D8*/ PPC::Runtime::ASM::mr(context->r27, context->r5);
/*80384BDC 003819DC*/ PPC::Runtime::ASM::mr(context->r28, context->r6);
/*80384BE0 003819E0*/ PPC::Runtime::ASM::bl(fn_80384CC8);
/*80384BE4 003819E4*/ PPC::Runtime::ASM::addi(context->r0, context->r31, 0x8);
/*80384BE8 003819E8*/ PPC::Runtime::ASM::addic.(context->r29, context->r3, 0x8);
/*80384BEC 003819EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80384BF0 003819F0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80384BF4 003819F4*/ PPC::Runtime::ASM::beq(.L_80384C70);
/*80384BF8 003819F8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BEFE4 @ Get_MemoryOffset_HighBit);
/*80384BFC 003819FC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80384C00 00381A00*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804BEFE4 @ Get_MemoryOffset_LowBit);
/*80384C04 00381A04*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80384C08 00381A08*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80384C0C 00381A0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*80384C10 00381A10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*80384C14 00381A14*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80384C18 00381A18*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*80384C1C 00381A1C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80384C20 00381A20*/ PPC::Runtime::ASM::bctrl();
/*80384C24 00381A24*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BF034 @ Get_MemoryOffset_HighBit);
/*80384C28 00381A28*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*80384C2C 00381A2C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BF034 @ Get_MemoryOffset_LowBit);
/*80384C30 00381A30*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/*80384C34 00381A34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80384C38 00381A38*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*80384C3C 00381A3C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*80384C40 00381A40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r28));
/*80384C44 00381A44*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*80384C48 00381A48*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r28));
/*80384C4C 00381A4C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80384C50 00381A50*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r28));
/*80384C54 00381A54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*80384C58 00381A58*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r28));
/*80384C5C 00381A5C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r29));
/*80384C60 00381A60*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r28));
/*80384C64 00381A64*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*80384C68 00381A68*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*80384C6C 00381A6C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_80384C70, 0x80384C70) //this is a jump label
/*80384C70 00381A70*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*80384C74 00381A74*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80384C78 00381A78*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80384C7C 00381A7C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80384C80 00381A80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80384C84 00381A84*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80384C88 00381A88*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80384C8C 00381A8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80384C90 00381A90*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80384C94 00381A94*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80384C98 00381A98*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80384C9C 00381A9C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80384CA0 00381AA0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80384CA4 00381AA4*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80384CA8 00381AA8*/ PPC::Runtime::ASM::b(.L_80384CB0);
/*80384CAC 00381AAC*/ PPC::Runtime::ASM::bl(fn_8029B1A8);
RUNTIME_PPC_JUMP_LABEL(.L_80384CB0, 0x80384CB0) //this is a jump label
/*80384CB0 00381AB0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80384CB4 00381AB4*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*80384CB8 00381AB8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80384CBC 00381ABC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80384CC0 00381AC0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80384CC4 00381AC4*/ PPC::Runtime::ASM::blr();
}