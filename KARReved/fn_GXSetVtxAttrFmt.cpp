//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_GXSetVtxAttrFmt(PPC::Runtime::GCContext* context)
{
/*803CAC3C 003C7A3C*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x9);
/*803CAC40 003C7A40*/ PPC::Runtime::ASM::lwz(context->r8, gx @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CAC44 003C7A44*/ PPC::Runtime::ASM::slwi(context->r4, context->r3, 2);
/*803CAC48 003C7A48*/ PPC::Runtime::ASM::add(context->r9, context->r8, context->r4);
/*803CAC4C 003C7A4C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x10);
/*803CAC50 003C7A50*/ PPC::Runtime::ASM::addi(context->r4, context->r9, 0x1c);
/*803CAC54 003C7A54*/ PPC::Runtime::ASM::addi(context->r8, context->r9, 0x3c);
/*803CAC58 003C7A58*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x5c);
/*803CAC5C 003C7A5C*/ PPC::Runtime::ASM::bgt(.L_803CAF64);
/*803CAC60 003C7A60*/ PPC::Runtime::ASM::lis(context->r10, jumptable_804F9AE0 @ Get_MemoryOffset_HighBit);
/*803CAC64 003C7A64*/ PPC::Runtime::ASM::addi(context->r10, context->r10, jumptable_804F9AE0 @ Get_MemoryOffset_LowBit);
/*803CAC68 003C7A68*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*803CAC6C 003C7A6C*/ PPC::Runtime::ASM::lwzx(context->r0, context->r10, context->r0);
/*803CAC70 003C7A70*/ PPC::Runtime::ASM::mtctr(context->r0);
/*803CAC74 003C7A74*/ PPC::Runtime::ASM::bctr();
/*803CAC78 003C7A78*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803CAC7C 003C7A7C*/ PPC::Runtime::ASM::slwi(context->r6, context->r6, 1);
/*803CAC80 003C7A80*/ PPC::Runtime::ASM::clrrwi(context->r0, context->r0, 1);
/*803CAC84 003C7A84*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r5);
/*803CAC88 003C7A88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803CAC8C 003C7A8C*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r7, 24, 4);
/*803CAC90 003C7A90*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803CAC94 003C7A94*/ PPC::Runtime::ASM::rlwinm(context->r5, context->r5, 0, 31, 27);
/*803CAC98 003C7A98*/ PPC::Runtime::ASM::or(context->r5, context->r5, context->r6);
/*803CAC9C 003C7A9C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803CACA0 003C7AA0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803CACA4 003C7AA4*/ PPC::Runtime::ASM::rlwinm(context->r5, context->r5, 0, 28, 22);
/*803CACA8 003C7AA8*/ PPC::Runtime::ASM::or(context->r0, context->r5, context->r0);
/*803CACAC 003C7AAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803CACB0 003C7AB0*/ PPC::Runtime::ASM::b(.L_803CAF64);
/*803CACB4 003C7AB4*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803CACB8 003C7AB8*/ PPC::Runtime::ASM::slwi(context->r0, context->r6, 10);
/*803CACBC 003C7ABC*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x2);
/*803CACC0 003C7AC0*/ PPC::Runtime::ASM::rlwinm(context->r6, context->r7, 0, 22, 18);
/*803CACC4 003C7AC4*/ PPC::Runtime::ASM::or(context->r0, context->r6, context->r0);
/*803CACC8 003C7AC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803CACCC 003C7ACC*/ PPC::Runtime::ASM::bne(.L_803CACF4);
/*803CACD0 003C7AD0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803CACD4 003C7AD4*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 23, 21);
/*803CACD8 003C7AD8*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x200);
/*803CACDC 003C7ADC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803CACE0 003C7AE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803CACE4 003C7AE4*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 1);
/*803CACE8 003C7AE8*/ PPC::Runtime::ASM::oris(context->r0, context->r0, 0x8000);
/*803CACEC 003C7AEC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803CACF0 003C7AF0*/ PPC::Runtime::ASM::b(.L_803CAF64);
RUNTIME_PPC_JUMP_LABEL(.L_803CACF4, 0x803CACF4) //this is a jump label
/*803CACF4 003C7AF4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803CACF8 003C7AF8*/ PPC::Runtime::ASM::slwi(context->r0, context->r5, 9);
/*803CACFC 003C7AFC*/ PPC::Runtime::ASM::rlwinm(context->r5, context->r6, 0, 23, 21);
/*803CAD00 003C7B00*/ PPC::Runtime::ASM::or(context->r0, context->r5, context->r0);
/*803CAD04 003C7B04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803CAD08 003C7B08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803CAD0C 003C7B0C*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 1);
/*803CAD10 003C7B10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803CAD14 003C7B14*/ PPC::Runtime::ASM::b(.L_803CAF64);
/*803CAD18 003C7B18*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803CAD1C 003C7B1C*/ PPC::Runtime::ASM::slwi(context->r5, context->r5, 13);
/*803CAD20 003C7B20*/ PPC::Runtime::ASM::slwi(context->r0, context->r6, 14);
/*803CAD24 003C7B24*/ PPC::Runtime::ASM::rlwinm(context->r6, context->r7, 0, 19, 17);
/*803CAD28 003C7B28*/ PPC::Runtime::ASM::or(context->r5, context->r6, context->r5);
/*803CAD2C 003C7B2C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803CAD30 003C7B30*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803CAD34 003C7B34*/ PPC::Runtime::ASM::rlwinm(context->r5, context->r5, 0, 18, 14);
/*803CAD38 003C7B38*/ PPC::Runtime::ASM::or(context->r0, context->r5, context->r0);
/*803CAD3C 003C7B3C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803CAD40 003C7B40*/ PPC::Runtime::ASM::b(.L_803CAF64);
/*803CAD44 003C7B44*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803CAD48 003C7B48*/ PPC::Runtime::ASM::slwi(context->r5, context->r5, 17);
/*803CAD4C 003C7B4C*/ PPC::Runtime::ASM::slwi(context->r0, context->r6, 18);
/*803CAD50 003C7B50*/ PPC::Runtime::ASM::rlwinm(context->r6, context->r7, 0, 15, 13);
/*803CAD54 003C7B54*/ PPC::Runtime::ASM::or(context->r5, context->r6, context->r5);
/*803CAD58 003C7B58*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803CAD5C 003C7B5C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803CAD60 003C7B60*/ PPC::Runtime::ASM::rlwinm(context->r5, context->r5, 0, 14, 10);
/*803CAD64 003C7B64*/ PPC::Runtime::ASM::or(context->r0, context->r5, context->r0);
/*803CAD68 003C7B68*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803CAD6C 003C7B6C*/ PPC::Runtime::ASM::b(.L_803CAF64);
/*803CAD70 003C7B70*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803CAD74 003C7B74*/ PPC::Runtime::ASM::slwi(context->r0, context->r5, 21);
/*803CAD78 003C7B78*/ PPC::Runtime::ASM::rlwinm(context->r5, context->r8, 0, 11, 9);
/*803CAD7C 003C7B7C*/ PPC::Runtime::ASM::or(context->r0, context->r5, context->r0);
/*803CAD80 003C7B80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803CAD84 003C7B84*/ PPC::Runtime::ASM::slwi(context->r5, context->r6, 22);
/*803CAD88 003C7B88*/ PPC::Runtime::ASM::slwi(context->r0, context->r7, 25);
/*803CAD8C 003C7B8C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803CAD90 003C7B90*/ PPC::Runtime::ASM::rlwinm(context->r6, context->r6, 0, 10, 6);
/*803CAD94 003C7B94*/ PPC::Runtime::ASM::or(context->r5, context->r6, context->r5);
/*803CAD98 003C7B98*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803CAD9C 003C7B9C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803CADA0 003C7BA0*/ PPC::Runtime::ASM::rlwinm(context->r5, context->r5, 0, 7, 1);
/*803CADA4 003C7BA4*/ PPC::Runtime::ASM::or(context->r0, context->r5, context->r0);
/*803CADA8 003C7BA8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803CADAC 003C7BAC*/ PPC::Runtime::ASM::b(.L_803CAF64);
/*803CADB0 003C7BB0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803CADB4 003C7BB4*/ PPC::Runtime::ASM::slwi(context->r4, context->r6, 1);
/*803CADB8 003C7BB8*/ PPC::Runtime::ASM::clrrwi(context->r0, context->r0, 1);
/*803CADBC 003C7BBC*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r5);
/*803CADC0 003C7BC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803CADC4 003C7BC4*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r7, 24, 4);
/*803CADC8 003C7BC8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803CADCC 003C7BCC*/ PPC::Runtime::ASM::rlwinm(context->r5, context->r5, 0, 31, 27);
/*803CADD0 003C7BD0*/ PPC::Runtime::ASM::or(context->r4, context->r5, context->r4);
/*803CADD4 003C7BD4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803CADD8 003C7BD8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803CADDC 003C7BDC*/ PPC::Runtime::ASM::rlwinm(context->r4, context->r4, 0, 28, 22);
/*803CADE0 003C7BE0*/ PPC::Runtime::ASM::or(context->r0, context->r4, context->r0);
/*803CADE4 003C7BE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803CADE8 003C7BE8*/ PPC::Runtime::ASM::b(.L_803CAF64);
/*803CADEC 003C7BEC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803CADF0 003C7BF0*/ PPC::Runtime::ASM::slwi(context->r0, context->r5, 9);
/*803CADF4 003C7BF4*/ PPC::Runtime::ASM::rlwinm(context->r4, context->r4, 0, 23, 21);
/*803CADF8 003C7BF8*/ PPC::Runtime::ASM::or(context->r0, context->r4, context->r0);
/*803CADFC 003C7BFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803CAE00 003C7C00*/ PPC::Runtime::ASM::slwi(context->r4, context->r6, 10);
/*803CAE04 003C7C04*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r7, 24, 13);
/*803CAE08 003C7C08*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803CAE0C 003C7C0C*/ PPC::Runtime::ASM::rlwinm(context->r5, context->r5, 0, 22, 18);
/*803CAE10 003C7C10*/ PPC::Runtime::ASM::or(context->r4, context->r5, context->r4);
/*803CAE14 003C7C14*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803CAE18 003C7C18*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803CAE1C 003C7C1C*/ PPC::Runtime::ASM::rlwinm(context->r4, context->r4, 0, 19, 13);
/*803CAE20 003C7C20*/ PPC::Runtime::ASM::or(context->r0, context->r4, context->r0);
/*803CAE24 003C7C24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803CAE28 003C7C28*/ PPC::Runtime::ASM::b(.L_803CAF64);
/*803CAE2C 003C7C2C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803CAE30 003C7C30*/ PPC::Runtime::ASM::slwi(context->r0, context->r5, 18);
/*803CAE34 003C7C34*/ PPC::Runtime::ASM::rlwinm(context->r4, context->r4, 0, 14, 12);
/*803CAE38 003C7C38*/ PPC::Runtime::ASM::or(context->r0, context->r4, context->r0);
/*803CAE3C 003C7C3C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803CAE40 003C7C40*/ PPC::Runtime::ASM::slwi(context->r4, context->r6, 19);
/*803CAE44 003C7C44*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r7, 24, 22);
/*803CAE48 003C7C48*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803CAE4C 003C7C4C*/ PPC::Runtime::ASM::rlwinm(context->r5, context->r5, 0, 13, 9);
/*803CAE50 003C7C50*/ PPC::Runtime::ASM::or(context->r4, context->r5, context->r4);
/*803CAE54 003C7C54*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803CAE58 003C7C58*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803CAE5C 003C7C5C*/ PPC::Runtime::ASM::rlwinm(context->r4, context->r4, 0, 10, 4);
/*803CAE60 003C7C60*/ PPC::Runtime::ASM::or(context->r0, context->r4, context->r0);
/*803CAE64 003C7C64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803CAE68 003C7C68*/ PPC::Runtime::ASM::b(.L_803CAF64);
/*803CAE6C 003C7C6C*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803CAE70 003C7C70*/ PPC::Runtime::ASM::slwi(context->r0, context->r5, 27);
/*803CAE74 003C7C74*/ PPC::Runtime::ASM::slwi(context->r4, context->r6, 28);
/*803CAE78 003C7C78*/ PPC::Runtime::ASM::rlwinm(context->r5, context->r10, 0, 5, 3);
/*803CAE7C 003C7C7C*/ PPC::Runtime::ASM::or(context->r0, context->r5, context->r0);
/*803CAE80 003C7C80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803CAE84 003C7C84*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r7, 24);
/*803CAE88 003C7C88*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803CAE8C 003C7C8C*/ PPC::Runtime::ASM::rlwinm(context->r5, context->r5, 0, 4, 0);
/*803CAE90 003C7C90*/ PPC::Runtime::ASM::or(context->r4, context->r5, context->r4);
/*803CAE94 003C7C94*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803CAE98 003C7C98*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803CAE9C 003C7C9C*/ PPC::Runtime::ASM::clrrwi(context->r4, context->r4, 5);
/*803CAEA0 003C7CA0*/ PPC::Runtime::ASM::or(context->r0, context->r4, context->r0);
/*803CAEA4 003C7CA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803CAEA8 003C7CA8*/ PPC::Runtime::ASM::b(.L_803CAF64);
/*803CAEAC 003C7CAC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803CAEB0 003C7CB0*/ PPC::Runtime::ASM::slwi(context->r0, context->r5, 5);
/*803CAEB4 003C7CB4*/ PPC::Runtime::ASM::rlwinm(context->r4, context->r4, 0, 27, 25);
/*803CAEB8 003C7CB8*/ PPC::Runtime::ASM::or(context->r0, context->r4, context->r0);
/*803CAEBC 003C7CBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803CAEC0 003C7CC0*/ PPC::Runtime::ASM::slwi(context->r4, context->r6, 6);
/*803CAEC4 003C7CC4*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r7, 24, 9);
/*803CAEC8 003C7CC8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803CAECC 003C7CCC*/ PPC::Runtime::ASM::rlwinm(context->r5, context->r5, 0, 26, 22);
/*803CAED0 003C7CD0*/ PPC::Runtime::ASM::or(context->r4, context->r5, context->r4);
/*803CAED4 003C7CD4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803CAED8 003C7CD8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803CAEDC 003C7CDC*/ PPC::Runtime::ASM::rlwinm(context->r4, context->r4, 0, 23, 17);
/*803CAEE0 003C7CE0*/ PPC::Runtime::ASM::or(context->r0, context->r4, context->r0);
/*803CAEE4 003C7CE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803CAEE8 003C7CE8*/ PPC::Runtime::ASM::b(.L_803CAF64);
/*803CAEEC 003C7CEC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803CAEF0 003C7CF0*/ PPC::Runtime::ASM::slwi(context->r0, context->r5, 14);
/*803CAEF4 003C7CF4*/ PPC::Runtime::ASM::rlwinm(context->r4, context->r4, 0, 18, 16);
/*803CAEF8 003C7CF8*/ PPC::Runtime::ASM::or(context->r0, context->r4, context->r0);
/*803CAEFC 003C7CFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803CAF00 003C7D00*/ PPC::Runtime::ASM::slwi(context->r4, context->r6, 15);
/*803CAF04 003C7D04*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r7, 24, 18);
/*803CAF08 003C7D08*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803CAF0C 003C7D0C*/ PPC::Runtime::ASM::rlwinm(context->r5, context->r5, 0, 17, 13);
/*803CAF10 003C7D10*/ PPC::Runtime::ASM::or(context->r4, context->r5, context->r4);
/*803CAF14 003C7D14*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803CAF18 003C7D18*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803CAF1C 003C7D1C*/ PPC::Runtime::ASM::rlwinm(context->r4, context->r4, 0, 14, 8);
/*803CAF20 003C7D20*/ PPC::Runtime::ASM::or(context->r0, context->r4, context->r0);
/*803CAF24 003C7D24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803CAF28 003C7D28*/ PPC::Runtime::ASM::b(.L_803CAF64);
/*803CAF2C 003C7D2C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803CAF30 003C7D30*/ PPC::Runtime::ASM::slwi(context->r0, context->r5, 23);
/*803CAF34 003C7D34*/ PPC::Runtime::ASM::rlwinm(context->r4, context->r4, 0, 9, 7);
/*803CAF38 003C7D38*/ PPC::Runtime::ASM::or(context->r0, context->r4, context->r0);
/*803CAF3C 003C7D3C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803CAF40 003C7D40*/ PPC::Runtime::ASM::slwi(context->r0, context->r6, 24);
/*803CAF44 003C7D44*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803CAF48 003C7D48*/ PPC::Runtime::ASM::rlwinm(context->r4, context->r4, 0, 8, 4);
/*803CAF4C 003C7D4C*/ PPC::Runtime::ASM::or(context->r0, context->r4, context->r0);
/*803CAF50 003C7D50*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803CAF54 003C7D54*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803CAF58 003C7D58*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 5);
/*803CAF5C 003C7D5C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r7, 27, 0, 4);
/*803CAF60 003C7D60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
RUNTIME_PPC_JUMP_LABEL(.L_803CAF64, 0x803CAF64) //this is a jump label
/*803CAF64 003C7D64*/ PPC::Runtime::ASM::lwz(context->r5, gx @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CAF68 003C7D68*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r3, 24);
/*803CAF6C 003C7D6C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803CAF70 003C7D70*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4f4, context->r5));
/*803CAF74 003C7D74*/ PPC::Runtime::ASM::slw(context->r0, context->r3, context->r0);
/*803CAF78 003C7D78*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 24);
/*803CAF7C 003C7D7C*/ PPC::Runtime::ASM::ori(context->r3, context->r4, 0x10);
/*803CAF80 003C7D80*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4f4, context->r5));
/*803CAF84 003C7D84*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4f3, context->r5));
/*803CAF88 003C7D88*/ PPC::Runtime::ASM::or(context->r0, context->r3, context->r0);
/*803CAF8C 003C7D8C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4f3, context->r5));
/*803CAF90 003C7D90*/ PPC::Runtime::ASM::blr();
}