//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80243B48(PPC::Runtime::GCContext* context)
{
/*80243B48 00240948*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80243B4C 0024094C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80243B50 00240950*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80243B54 00240954*/ PPC::Runtime::ASM::fabs(context->f2, context->f0);
/*80243B58 00240958*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80243B5C 0024095C*/ PPC::Runtime::ASM::fabs(context->f1, context->f1);
/*80243B60 00240960*/ PPC::Runtime::ASM::fabs(context->f0, context->f0);
/*80243B64 00240964*/ PPC::Runtime::ASM::frsp(context->f2, context->f2);
/*80243B68 00240968*/ PPC::Runtime::ASM::frsp(context->f1, context->f1);
/*80243B6C 0024096C*/ PPC::Runtime::ASM::frsp(context->f0, context->f0);
/*80243B70 00240970*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f1);
/*80243B74 00240974*/ PPC::Runtime::ASM::ble(.L_80243DA0);
/*80243B78 00240978*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*80243B7C 0024097C*/ PPC::Runtime::ASM::ble(.L_80243C90);
/*80243B80 00240980*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x0);
/*80243B84 00240984*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*80243B88 00240988*/ PPC::Runtime::ASM::ble(.L_80243C84);
/*80243B8C 0024098C*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x8);
/*80243B90 00240990*/ PPC::Runtime::ASM::subi(context->r4, context->r6, 0x8);
/*80243B94 00240994*/ PPC::Runtime::ASM::ble(.L_80243C44);
/*80243B98 00240998*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x7);
/*80243B9C 0024099C*/ PPC::Runtime::ASM::mr(context->r7, context->r3);
/*80243BA0 002409A0*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 3);
/*80243BA4 002409A4*/ PPC::Runtime::ASM::addi(context->r9, context->r1, 0x8);
/*80243BA8 002409A8*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80243BAC 002409AC*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*80243BB0 002409B0*/ PPC::Runtime::ASM::ble(.L_80243C44);
RUNTIME_PPC_JUMP_LABEL(.L_80243BB4, 0x80243BB4) //this is a jump label
/*80243BB4 002409B4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*80243BB8 002409B8*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x8);
/*80243BBC 002409BC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*80243BC0 002409C0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*80243BC4 002409C4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r9));
/*80243BC8 002409C8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r7));
/*80243BCC 002409CC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r9));
/*80243BD0 002409D0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r7));
/*80243BD4 002409D4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r9));
/*80243BD8 002409D8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r7));
/*80243BDC 002409DC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r9));
/*80243BE0 002409E0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r7));
/*80243BE4 002409E4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r9));
/*80243BE8 002409E8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r7));
/*80243BEC 002409EC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r9));
/*80243BF0 002409F0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r7));
/*80243BF4 002409F4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r9));
/*80243BF8 002409F8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r7));
/*80243BFC 002409FC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r9));
/*80243C00 00240A00*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r7));
/*80243C04 00240A04*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r9));
/*80243C08 00240A08*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r7));
/*80243C0C 00240A0C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r9));
/*80243C10 00240A10*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r7));
/*80243C14 00240A14*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r9));
/*80243C18 00240A18*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r7));
/*80243C1C 00240A1C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r9));
/*80243C20 00240A20*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r7));
/*80243C24 00240A24*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r9));
/*80243C28 00240A28*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r7));
/*80243C2C 00240A2C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r9));
/*80243C30 00240A30*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r7));
/*80243C34 00240A34*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x60);
/*80243C38 00240A38*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r9));
/*80243C3C 00240A3C*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x40);
/*80243C40 00240A40*/ PPC::Runtime::ASM::bdnz(.L_80243BB4);
RUNTIME_PPC_JUMP_LABEL(.L_80243C44, 0x80243C44) //this is a jump label
/*80243C44 00240A44*/ PPC::Runtime::ASM::mulli(context->r7, context->r8, 0xc);
/*80243C48 00240A48*/ PPC::Runtime::ASM::slwi(context->r4, context->r8, 3);
/*80243C4C 00240A4C*/ PPC::Runtime::ASM::addi(context->r9, context->r1, 0x8);
/*80243C50 00240A50*/ PPC::Runtime::ASM::subf(context->r0, context->r8, context->r6);
/*80243C54 00240A54*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r7);
/*80243C58 00240A58*/ PPC::Runtime::ASM::add(context->r9, context->r9, context->r4);
/*80243C5C 00240A5C*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80243C60 00240A60*/ PPC::Runtime::ASM::cmpw(context->r8, context->r6);
/*80243C64 00240A64*/ PPC::Runtime::ASM::bge(.L_80243C84);
RUNTIME_PPC_JUMP_LABEL(.L_80243C68, 0x80243C68) //this is a jump label
/*80243C68 00240A68*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80243C6C 00240A6C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*80243C70 00240A70*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80243C74 00240A74*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0xc);
/*80243C78 00240A78*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r9));
/*80243C7C 00240A7C*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x8);
/*80243C80 00240A80*/ PPC::Runtime::ASM::bdnz(.L_80243C68);
RUNTIME_PPC_JUMP_LABEL(.L_80243C84, 0x80243C84) //this is a jump label
/*80243C84 00240A84*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80243C88 00240A88*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*80243C8C 00240A8C*/ PPC::Runtime::ASM::b(.L_80243FC4);
RUNTIME_PPC_JUMP_LABEL(.L_80243C90, 0x80243C90) //this is a jump label
/*80243C90 00240A90*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x0);
/*80243C94 00240A94*/ PPC::Runtime::ASM::li(context->r9, 0x0);
/*80243C98 00240A98*/ PPC::Runtime::ASM::ble(.L_80243D94);
/*80243C9C 00240A9C*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x8);
/*80243CA0 00240AA0*/ PPC::Runtime::ASM::subi(context->r4, context->r6, 0x8);
/*80243CA4 00240AA4*/ PPC::Runtime::ASM::ble(.L_80243D54);
/*80243CA8 00240AA8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x7);
/*80243CAC 00240AAC*/ PPC::Runtime::ASM::mr(context->r7, context->r3);
/*80243CB0 00240AB0*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 3);
/*80243CB4 00240AB4*/ PPC::Runtime::ASM::addi(context->r8, context->r1, 0x8);
/*80243CB8 00240AB8*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80243CBC 00240ABC*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*80243CC0 00240AC0*/ PPC::Runtime::ASM::ble(.L_80243D54);
RUNTIME_PPC_JUMP_LABEL(.L_80243CC4, 0x80243CC4) //this is a jump label
/*80243CC4 00240AC4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*80243CC8 00240AC8*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x8);
/*80243CCC 00240ACC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*80243CD0 00240AD0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*80243CD4 00240AD4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*80243CD8 00240AD8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r7));
/*80243CDC 00240ADC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r8));
/*80243CE0 00240AE0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r7));
/*80243CE4 00240AE4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r8));
/*80243CE8 00240AE8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r7));
/*80243CEC 00240AEC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r8));
/*80243CF0 00240AF0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r7));
/*80243CF4 00240AF4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r8));
/*80243CF8 00240AF8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r7));
/*80243CFC 00240AFC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r8));
/*80243D00 00240B00*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r7));
/*80243D04 00240B04*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r8));
/*80243D08 00240B08*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r7));
/*80243D0C 00240B0C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r8));
/*80243D10 00240B10*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r7));
/*80243D14 00240B14*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r8));
/*80243D18 00240B18*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r7));
/*80243D1C 00240B1C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r8));
/*80243D20 00240B20*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r7));
/*80243D24 00240B24*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r8));
/*80243D28 00240B28*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r7));
/*80243D2C 00240B2C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r8));
/*80243D30 00240B30*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r7));
/*80243D34 00240B34*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r8));
/*80243D38 00240B38*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r7));
/*80243D3C 00240B3C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r8));
/*80243D40 00240B40*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r7));
/*80243D44 00240B44*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x60);
/*80243D48 00240B48*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r8));
/*80243D4C 00240B4C*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x40);
/*80243D50 00240B50*/ PPC::Runtime::ASM::bdnz(.L_80243CC4);
RUNTIME_PPC_JUMP_LABEL(.L_80243D54, 0x80243D54) //this is a jump label
/*80243D54 00240B54*/ PPC::Runtime::ASM::mulli(context->r7, context->r9, 0xc);
/*80243D58 00240B58*/ PPC::Runtime::ASM::slwi(context->r4, context->r9, 3);
/*80243D5C 00240B5C*/ PPC::Runtime::ASM::addi(context->r8, context->r1, 0x8);
/*80243D60 00240B60*/ PPC::Runtime::ASM::subf(context->r0, context->r9, context->r6);
/*80243D64 00240B64*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r7);
/*80243D68 00240B68*/ PPC::Runtime::ASM::add(context->r8, context->r8, context->r4);
/*80243D6C 00240B6C*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80243D70 00240B70*/ PPC::Runtime::ASM::cmpw(context->r9, context->r6);
/*80243D74 00240B74*/ PPC::Runtime::ASM::bge(.L_80243D94);
RUNTIME_PPC_JUMP_LABEL(.L_80243D78, 0x80243D78) //this is a jump label
/*80243D78 00240B78*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80243D7C 00240B7C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*80243D80 00240B80*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80243D84 00240B84*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0xc);
/*80243D88 00240B88*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*80243D8C 00240B8C*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x8);
/*80243D90 00240B90*/ PPC::Runtime::ASM::bdnz(.L_80243D78);
RUNTIME_PPC_JUMP_LABEL(.L_80243D94, 0x80243D94) //this is a jump label
/*80243D94 00240B94*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80243D98 00240B98*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80243D9C 00240B9C*/ PPC::Runtime::ASM::b(.L_80243FC4);
RUNTIME_PPC_JUMP_LABEL(.L_80243DA0, 0x80243DA0) //this is a jump label
/*80243DA0 00240BA0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80243DA4 00240BA4*/ PPC::Runtime::ASM::ble(.L_80243EB8);
/*80243DA8 00240BA8*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x0);
/*80243DAC 00240BAC*/ PPC::Runtime::ASM::li(context->r9, 0x0);
/*80243DB0 00240BB0*/ PPC::Runtime::ASM::ble(.L_80243EAC);
/*80243DB4 00240BB4*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x8);
/*80243DB8 00240BB8*/ PPC::Runtime::ASM::subi(context->r4, context->r6, 0x8);
/*80243DBC 00240BBC*/ PPC::Runtime::ASM::ble(.L_80243E6C);
/*80243DC0 00240BC0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x7);
/*80243DC4 00240BC4*/ PPC::Runtime::ASM::mr(context->r7, context->r3);
/*80243DC8 00240BC8*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 3);
/*80243DCC 00240BCC*/ PPC::Runtime::ASM::addi(context->r8, context->r1, 0x8);
/*80243DD0 00240BD0*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80243DD4 00240BD4*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*80243DD8 00240BD8*/ PPC::Runtime::ASM::ble(.L_80243E6C);
RUNTIME_PPC_JUMP_LABEL(.L_80243DDC, 0x80243DDC) //this is a jump label
/*80243DDC 00240BDC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*80243DE0 00240BE0*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x8);
/*80243DE4 00240BE4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*80243DE8 00240BE8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*80243DEC 00240BEC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*80243DF0 00240BF0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r7));
/*80243DF4 00240BF4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r8));
/*80243DF8 00240BF8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r7));
/*80243DFC 00240BFC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r8));
/*80243E00 00240C00*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r7));
/*80243E04 00240C04*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r8));
/*80243E08 00240C08*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r7));
/*80243E0C 00240C0C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r8));
/*80243E10 00240C10*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r7));
/*80243E14 00240C14*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r8));
/*80243E18 00240C18*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r7));
/*80243E1C 00240C1C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r8));
/*80243E20 00240C20*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r7));
/*80243E24 00240C24*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r8));
/*80243E28 00240C28*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r7));
/*80243E2C 00240C2C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r8));
/*80243E30 00240C30*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r7));
/*80243E34 00240C34*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r8));
/*80243E38 00240C38*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r7));
/*80243E3C 00240C3C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r8));
/*80243E40 00240C40*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r7));
/*80243E44 00240C44*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r8));
/*80243E48 00240C48*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r7));
/*80243E4C 00240C4C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r8));
/*80243E50 00240C50*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r7));
/*80243E54 00240C54*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r8));
/*80243E58 00240C58*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r7));
/*80243E5C 00240C5C*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x60);
/*80243E60 00240C60*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r8));
/*80243E64 00240C64*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x40);
/*80243E68 00240C68*/ PPC::Runtime::ASM::bdnz(.L_80243DDC);
RUNTIME_PPC_JUMP_LABEL(.L_80243E6C, 0x80243E6C) //this is a jump label
/*80243E6C 00240C6C*/ PPC::Runtime::ASM::mulli(context->r7, context->r9, 0xc);
/*80243E70 00240C70*/ PPC::Runtime::ASM::slwi(context->r4, context->r9, 3);
/*80243E74 00240C74*/ PPC::Runtime::ASM::addi(context->r8, context->r1, 0x8);
/*80243E78 00240C78*/ PPC::Runtime::ASM::subf(context->r0, context->r9, context->r6);
/*80243E7C 00240C7C*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r7);
/*80243E80 00240C80*/ PPC::Runtime::ASM::add(context->r8, context->r8, context->r4);
/*80243E84 00240C84*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80243E88 00240C88*/ PPC::Runtime::ASM::cmpw(context->r9, context->r6);
/*80243E8C 00240C8C*/ PPC::Runtime::ASM::bge(.L_80243EAC);
RUNTIME_PPC_JUMP_LABEL(.L_80243E90, 0x80243E90) //this is a jump label
/*80243E90 00240C90*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80243E94 00240C94*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*80243E98 00240C98*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80243E9C 00240C9C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0xc);
/*80243EA0 00240CA0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*80243EA4 00240CA4*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x8);
/*80243EA8 00240CA8*/ PPC::Runtime::ASM::bdnz(.L_80243E90);
RUNTIME_PPC_JUMP_LABEL(.L_80243EAC, 0x80243EAC) //this is a jump label
/*80243EAC 00240CAC*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80243EB0 00240CB0*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*80243EB4 00240CB4*/ PPC::Runtime::ASM::b(.L_80243FC4);
RUNTIME_PPC_JUMP_LABEL(.L_80243EB8, 0x80243EB8) //this is a jump label
/*80243EB8 00240CB8*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x0);
/*80243EBC 00240CBC*/ PPC::Runtime::ASM::li(context->r9, 0x0);
/*80243EC0 00240CC0*/ PPC::Runtime::ASM::ble(.L_80243FBC);
/*80243EC4 00240CC4*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x8);
/*80243EC8 00240CC8*/ PPC::Runtime::ASM::subi(context->r4, context->r6, 0x8);
/*80243ECC 00240CCC*/ PPC::Runtime::ASM::ble(.L_80243F7C);
/*80243ED0 00240CD0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x7);
/*80243ED4 00240CD4*/ PPC::Runtime::ASM::mr(context->r7, context->r3);
/*80243ED8 00240CD8*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 3);
/*80243EDC 00240CDC*/ PPC::Runtime::ASM::addi(context->r8, context->r1, 0x8);
/*80243EE0 00240CE0*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80243EE4 00240CE4*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*80243EE8 00240CE8*/ PPC::Runtime::ASM::ble(.L_80243F7C);
RUNTIME_PPC_JUMP_LABEL(.L_80243EEC, 0x80243EEC) //this is a jump label
/*80243EEC 00240CEC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*80243EF0 00240CF0*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x8);
/*80243EF4 00240CF4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*80243EF8 00240CF8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*80243EFC 00240CFC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*80243F00 00240D00*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r7));
/*80243F04 00240D04*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r8));
/*80243F08 00240D08*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r7));
/*80243F0C 00240D0C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r8));
/*80243F10 00240D10*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r7));
/*80243F14 00240D14*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r8));
/*80243F18 00240D18*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r7));
/*80243F1C 00240D1C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r8));
/*80243F20 00240D20*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r7));
/*80243F24 00240D24*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r8));
/*80243F28 00240D28*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r7));
/*80243F2C 00240D2C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r8));
/*80243F30 00240D30*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r7));
/*80243F34 00240D34*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r8));
/*80243F38 00240D38*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r7));
/*80243F3C 00240D3C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r8));
/*80243F40 00240D40*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r7));
/*80243F44 00240D44*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r8));
/*80243F48 00240D48*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r7));
/*80243F4C 00240D4C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r8));
/*80243F50 00240D50*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r7));
/*80243F54 00240D54*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r8));
/*80243F58 00240D58*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r7));
/*80243F5C 00240D5C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r8));
/*80243F60 00240D60*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r7));
/*80243F64 00240D64*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r8));
/*80243F68 00240D68*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r7));
/*80243F6C 00240D6C*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x60);
/*80243F70 00240D70*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r8));
/*80243F74 00240D74*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x40);
/*80243F78 00240D78*/ PPC::Runtime::ASM::bdnz(.L_80243EEC);
RUNTIME_PPC_JUMP_LABEL(.L_80243F7C, 0x80243F7C) //this is a jump label
/*80243F7C 00240D7C*/ PPC::Runtime::ASM::mulli(context->r7, context->r9, 0xc);
/*80243F80 00240D80*/ PPC::Runtime::ASM::slwi(context->r4, context->r9, 3);
/*80243F84 00240D84*/ PPC::Runtime::ASM::addi(context->r8, context->r1, 0x8);
/*80243F88 00240D88*/ PPC::Runtime::ASM::subf(context->r0, context->r9, context->r6);
/*80243F8C 00240D8C*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r7);
/*80243F90 00240D90*/ PPC::Runtime::ASM::add(context->r8, context->r8, context->r4);
/*80243F94 00240D94*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80243F98 00240D98*/ PPC::Runtime::ASM::cmpw(context->r9, context->r6);
/*80243F9C 00240D9C*/ PPC::Runtime::ASM::bge(.L_80243FBC);
RUNTIME_PPC_JUMP_LABEL(.L_80243FA0, 0x80243FA0) //this is a jump label
/*80243FA0 00240DA0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80243FA4 00240DA4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*80243FA8 00240DA8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80243FAC 00240DAC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0xc);
/*80243FB0 00240DB0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*80243FB4 00240DB4*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x8);
/*80243FB8 00240DB8*/ PPC::Runtime::ASM::bdnz(.L_80243FA0);
RUNTIME_PPC_JUMP_LABEL(.L_80243FBC, 0x80243FBC) //this is a jump label
/*80243FBC 00240DBC*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80243FC0 00240DC0*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
RUNTIME_PPC_JUMP_LABEL(.L_80243FC4, 0x80243FC4) //this is a jump label
/*80243FC4 00240DC4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80243FC8 00240DC8*/ PPC::Runtime::ASM::addi(context->r7, context->r1, 0x8);
/*80243FCC 00240DCC*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80243FD0 00240DD0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2B50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80243FD4 00240DD4*/ PPC::Runtime::ASM::mtctr(context->r6);
/*80243FD8 00240DD8*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x0);
/*80243FDC 00240DDC*/ PPC::Runtime::ASM::ble(.L_80244080);
RUNTIME_PPC_JUMP_LABEL(.L_80243FE0, 0x80243FE0) //this is a jump label
/*80243FE0 00240DE0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*80243FE4 00240DE4*/ PPC::Runtime::ASM::cmpw(context->r0, context->r6);
/*80243FE8 00240DE8*/ PPC::Runtime::ASM::blt(.L_80243FF0);
/*80243FEC 00240DEC*/ PPC::Runtime::ASM::subf(context->r0, context->r6, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80243FF0, 0x80243FF0) //this is a jump label
/*80243FF0 00240DF0*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*80243FF4 00240DF4*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*80243FF8 00240DF8*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r0);
/*80243FFC 00240DFC*/ PPC::Runtime::ASM::lfs(context->f9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*80244000 00240E00*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80244004 00240E04*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x2);
/*80244008 00240E08*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8024400C 00240E0C*/ PPC::Runtime::ASM::cmpw(context->r0, context->r6);
/*80244010 00240E10*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f9);
/*80244014 00240E14*/ PPC::Runtime::ASM::lfs(context->f10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*80244018 00240E18*/ PPC::Runtime::ASM::fsubs(context->f7, context->f2, context->f10);
/*8024401C 00240E1C*/ PPC::Runtime::ASM::fneg(context->f8, context->f1);
/*80244020 00240E20*/ PPC::Runtime::ASM::blt(.L_80244028);
/*80244024 00240E24*/ PPC::Runtime::ASM::subf(context->r0, context->r6, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80244028, 0x80244028) //this is a jump label
/*80244028 00240E28*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*8024402C 00240E2C*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*80244030 00240E30*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r0);
/*80244034 00240E34*/ PPC::Runtime::ASM::fsubs(context->f1, context->f6, context->f9);
/*80244038 00240E38*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*8024403C 00240E3C*/ PPC::Runtime::ASM::fsubs(context->f2, context->f5, context->f10);
/*80244040 00240E40*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80244044 00240E44*/ PPC::Runtime::ASM::fsubs(context->f3, context->f3, context->f9);
/*80244048 00240E48*/ PPC::Runtime::ASM::fmuls(context->f1, context->f7, context->f1);
/*8024404C 00240E4C*/ PPC::Runtime::ASM::fsubs(context->f4, context->f4, context->f10);
/*80244050 00240E50*/ PPC::Runtime::ASM::fmuls(context->f3, context->f7, context->f3);
/*80244054 00240E54*/ PPC::Runtime::ASM::fmadds(context->f1, context->f8, context->f2, context->f1);
/*80244058 00240E58*/ PPC::Runtime::ASM::fmadds(context->f2, context->f8, context->f4, context->f3);
/*8024405C 00240E5C*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f1);
/*80244060 00240E60*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80244064 00240E64*/ PPC::Runtime::ASM::bge(.L_80244074);
/*80244068 00240E68*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8024406C 00240E6C*/ PPC::Runtime::ASM::slw(context->r0, context->r0, context->r4);
/*80244070 00240E70*/ PPC::Runtime::ASM::or(context->r3, context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80244074, 0x80244074) //this is a jump label
/*80244074 00240E74*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x8);
/*80244078 00240E78*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*8024407C 00240E7C*/ PPC::Runtime::ASM::bdnz(.L_80243FE0);
RUNTIME_PPC_JUMP_LABEL(.L_80244080, 0x80244080) //this is a jump label
/*80244080 00240E80*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80244084 00240E84*/ PPC::Runtime::ASM::blr();
}