//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80326B00(PPC::Runtime::GCContext* context)
{
/*80326B00 00323900*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80326B04 00323904*/ PPC::Runtime::ASM::mflr(context->r0);
/*80326B08 00323908*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80326B0C 0032390C*/ PPC::Runtime::ASM::li(context->r5, lbl_805DA7D0 @ Get_MemoryOffset_SDA21);
/*80326B10 00323910*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80326B14 00323914*/ PPC::Runtime::ASM::li(context->r6, lbl_805DA7C8 @ Get_MemoryOffset_SDA21);
/*80326B18 00323918*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80326B1C 0032391C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80326B20 00323920*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80326B24 00323924*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80326B28 00323928*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80326B2C 0032392C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80326B30 00323930*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80326B34 00323934*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80326B38 00323938*/ PPC::Runtime::ASM::lis(context->r4, 0x4330);
/*80326B3C 0032393C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80326B40 00323940*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_FLOAT_8 @ Get_MemoryOffset_HighBit);
/*80326B44 00323944*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80326B48 00323948*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_FLOAT_8 @ Get_MemoryOffset_LowBit);
/*80326B4C 0032394C*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E40D0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80326B50 00323950*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*80326B54 00323954*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80326B58 00323958*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E40D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80326B5C 0032395C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80326B60 00323960*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E40DC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80326B64 00323964*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f1);
/*80326B68 00323968*/ PPC::Runtime::ASM::bne(.L_80326B74);
/*80326B6C 0032396C*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_FLOAT_7 @ Get_MemoryOffset_HighBit);
/*80326B70 00323970*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_FLOAT_7 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_80326B74, 0x80326B74) //this is a jump label
/*80326B74 00323974*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80326B78 00323978*/ PPC::Runtime::ASM::addi(context->r29, context->r1, 0x8);
/*80326B7C 0032397C*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*80326B80 00323980*/ PPC::Runtime::ASM::fmuls(context->f0, context->f2, context->f0);
/*80326B84 00323984*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80326B88 00323988*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80326B8C 0032398C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80326B90 00323990*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80326B94 00323994*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80326B98 00323998*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80326B9C 0032399C*/ PPC::Runtime::ASM::bne(.L_80326BB0);
/*80326BA0 003239A0*/ PPC::Runtime::ASM::li(context->r3, lbl_805DA82C @ Get_MemoryOffset_SDA21);
/*80326BA4 003239A4*/ PPC::Runtime::ASM::li(context->r4, 0x316);
/*80326BA8 003239A8*/ PPC::Runtime::ASM::li(context->r5, lbl_805DA834 @ Get_MemoryOffset_SDA21);
/*80326BAC 003239AC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80326BB0, 0x80326BB0) //this is a jump label
/*80326BB0 003239B0*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80326BB4 003239B4*/ PPC::Runtime::ASM::bne(.L_80326BC8);
/*80326BB8 003239B8*/ PPC::Runtime::ASM::li(context->r3, lbl_805DA82C @ Get_MemoryOffset_SDA21);
/*80326BBC 003239BC*/ PPC::Runtime::ASM::li(context->r4, 0x317);
/*80326BC0 003239C0*/ PPC::Runtime::ASM::li(context->r5, lbl_805DA83C @ Get_MemoryOffset_SDA21);
/*80326BC4 003239C4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80326BC8, 0x80326BC8) //this is a jump label
/*80326BC8 003239C8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80326BCC 003239CC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*80326BD0 003239D0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80326BD4 003239D4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*80326BD8 003239D8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80326BDC 003239DC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*80326BE0 003239E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80326BE4 003239E4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80326BE8 003239E8*/ PPC::Runtime::ASM::bne(.L_80326C34);
/*80326BEC 003239EC*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80326BF0 003239F0*/ PPC::Runtime::ASM::beq(.L_80326C34);
/*80326BF4 003239F4*/ PPC::Runtime::ASM::bne(.L_80326C08);
/*80326BF8 003239F8*/ PPC::Runtime::ASM::li(context->r3, lbl_805DA82C @ Get_MemoryOffset_SDA21);
/*80326BFC 003239FC*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80326C00 00323A00*/ PPC::Runtime::ASM::li(context->r5, lbl_805DA834 @ Get_MemoryOffset_SDA21);
/*80326C04 00323A04*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80326C08, 0x80326C08) //this is a jump label
/*80326C08 00323A08*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80326C0C 00323A0C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80326C10 00323A10*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80326C14 00323A14*/ PPC::Runtime::ASM::bne(.L_80326C24);
/*80326C18 00323A18*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80326C1C 00323A1C*/ PPC::Runtime::ASM::beq(.L_80326C24);
/*80326C20 00323A20*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80326C24, 0x80326C24) //this is a jump label
/* 80326C24 00323A24  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*80326C28 00323A28*/ PPC::Runtime::ASM::bne(.L_80326C34);
/*80326C2C 00323A2C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80326C30 00323A30*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_80326C34, 0x80326C34) //this is a jump label
/*80326C34 00323A34*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80326C38 00323A38*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80326C3C 00323A3C*/ PPC::Runtime::ASM::beq(.L_80326CA8);
/*80326C40 00323A40*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80326C44 00323A44*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80326C48 00323A48*/ PPC::Runtime::ASM::li(context->r5, lbl_805DA7D0 @ Get_MemoryOffset_SDA21);
/*80326C4C 00323A4C*/ PPC::Runtime::ASM::li(context->r6, lbl_805DA7C8 @ Get_MemoryOffset_SDA21);
/*80326C50 00323A50*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80326C54 00323A54*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80326C58 00323A58*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80326C5C 00323A5C*/ PPC::Runtime::ASM::lis(context->r4, 0x4330);
/*80326C60 00323A60*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80326C64 00323A64*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_FLOAT_8 @ Get_MemoryOffset_HighBit);
/*80326C68 00323A68*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80326C6C 00323A6C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_FLOAT_8 @ Get_MemoryOffset_LowBit);
/*80326C70 00323A70*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E40D0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80326C74 00323A74*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*80326C78 00323A78*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80326C7C 00323A7C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80326C80 00323A80*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f1);
/*80326C84 00323A84*/ PPC::Runtime::ASM::bne(.L_80326C90);
/*80326C88 00323A88*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_FLOAT_7 @ Get_MemoryOffset_HighBit);
/*80326C8C 00323A8C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_FLOAT_7 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_80326C90, 0x80326C90) //this is a jump label
/*80326C90 00323A90*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80326C94 00323A94*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80326C98 00323A98*/ PPC::Runtime::ASM::bge(.L_80326CA8);
/*80326C9C 00323A9C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80326CA0 00323AA0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80326CA4 00323AA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80326CA8, 0x80326CA8) //this is a jump label
/*80326CA8 00323AA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80326CAC 00323AAC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80326CB0 00323AB0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80326CB4 00323AB4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80326CB8 00323AB8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80326CBC 00323ABC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80326CC0 00323AC0*/ PPC::Runtime::ASM::blr();
}