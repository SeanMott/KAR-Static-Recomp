//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022CCE8.hpp"
#include "fn_8022CDAC.hpp"
#include "fn_8012AC44.hpp"
#include "fn_80112044.hpp"
#include "fn_8011582C.hpp"
#include "fn_8011582C.hpp"
#include "fn_8012AF14.hpp"
#include "fn_80112044.hpp"
#include "fn_8011582C.hpp"
#include "fn_8011582C.hpp"



void fn_8012B1E8(PPC::Runtime::GCContext* context)
{
/*8012B1E8 00127FE8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8012B1EC 00127FEC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8012B1F0 00127FF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8012B1F4 00127FF4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8012B1F8 00127FF8*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*8012B1FC 00127FFC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8012B200 00128000*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8012B204 00128004*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 4, 24);
/*8012B208 00128008*/ PPC::Runtime::ASM::bl(fn_8022CCE8);
/*8012B20C 0012800C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8012B210 00128010*/ PPC::Runtime::ASM::clrlwi(context->r30, context->r3, 24);
/*8012B214 00128014*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 4, 24);
/*8012B218 00128018*/ PPC::Runtime::ASM::bl(fn_8022CDAC);
/*8012B21C 0012801C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r31));
/*8012B220 00128020*/ PPC::Runtime::ASM::clrlwi(context->r29, context->r3, 24);
/*8012B224 00128024*/ PPC::Runtime::ASM::cmplw(context->r30, context->r0);
/*8012B228 00128028*/ PPC::Runtime::ASM::beq(.L_8012B2D0);
/*8012B22C 0012802C*/ PPC::Runtime::ASM::li(context->r25, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8012B230, 0x8012B230) //this is a jump label
/*8012B230 00128030*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8012B234 00128034*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r31));
/*8012B238 00128038*/ PPC::Runtime::ASM::slw(context->r3, context->r3, context->r25);
/*8012B23C 0012803C*/ PPC::Runtime::ASM::and.(context->r0, context->r3, context->r0);
/*8012B240 00128040*/ PPC::Runtime::ASM::bne(.L_8012B25C);
/*8012B244 00128044*/ PPC::Runtime::ASM::and.(context->r0, context->r3, context->r30);
/*8012B248 00128048*/ PPC::Runtime::ASM::beq(.L_8012B2C0);
/*8012B24C 0012804C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8012B250 00128050*/ PPC::Runtime::ASM::mr(context->r4, context->r25);
/*8012B254 00128054*/ PPC::Runtime::ASM::bl(fn_8012AC44);
/*8012B258 00128058*/ PPC::Runtime::ASM::b(.L_8012B2C0);
RUNTIME_PPC_JUMP_LABEL(.L_8012B25C, 0x8012B25C) //this is a jump label
/*8012B25C 0012805C*/ PPC::Runtime::ASM::and.(context->r0, context->r3, context->r30);
/*8012B260 00128060*/ PPC::Runtime::ASM::bne(.L_8012B2C0);
/*8012B264 00128064*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8012B268 00128068*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8012B26C 0012806C*/ PPC::Runtime::ASM::mr(context->r26, context->r31);
/*8012B270 00128070*/ PPC::Runtime::ASM::mr(context->r28, context->r27);
RUNTIME_PPC_JUMP_LABEL(.L_8012B274, 0x8012B274) //this is a jump label
/*8012B274 00128074*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r26));
/*8012B278 00128078*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8012B27C 0012807C*/ PPC::Runtime::ASM::beq(.L_8012B298);
/*8012B280 00128080*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8012B284 00128084*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*8012B288 00128088*/ PPC::Runtime::ASM::cmpw(context->r0, context->r25);
/*8012B28C 0012808C*/ PPC::Runtime::ASM::bne(.L_8012B298);
/*8012B290 00128090*/ PPC::Runtime::ASM::bl(fn_8011582C);
/*8012B294 00128094*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_8012B298, 0x8012B298) //this is a jump label
/*8012B298 00128098*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
/*8012B29C 0012809C*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x4);
/*8012B2A0 001280A0*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x3);
/*8012B2A4 001280A4*/ PPC::Runtime::ASM::blt(.L_8012B274);
/*8012B2A8 001280A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*8012B2AC 001280AC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8012B2B0 001280B0*/ PPC::Runtime::ASM::beq(.L_8012B2C0);
/*8012B2B4 001280B4*/ PPC::Runtime::ASM::bl(fn_8011582C);
/*8012B2B8 001280B8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8012B2BC 001280BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8012B2C0, 0x8012B2C0) //this is a jump label
/*8012B2C0 001280C0*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0x1);
/*8012B2C4 001280C4*/ PPC::Runtime::ASM::cmpwi(context->r25, 0x3);
/*8012B2C8 001280C8*/ PPC::Runtime::ASM::blt(.L_8012B230);
/*8012B2CC 001280CC*/ PPC::Runtime::ASM::stb(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8012B2D0, 0x8012B2D0) //this is a jump label
/*8012B2D0 001280D0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x49, context->r31));
/*8012B2D4 001280D4*/ PPC::Runtime::ASM::cmplw(context->r29, context->r0);
/*8012B2D8 001280D8*/ PPC::Runtime::ASM::beq(.L_8012B384);
/*8012B2DC 001280DC*/ PPC::Runtime::ASM::li(context->r25, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8012B2E0, 0x8012B2E0) //this is a jump label
/*8012B2E0 001280E0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8012B2E4 001280E4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x49, context->r31));
/*8012B2E8 001280E8*/ PPC::Runtime::ASM::slw(context->r3, context->r3, context->r25);
/*8012B2EC 001280EC*/ PPC::Runtime::ASM::and.(context->r0, context->r3, context->r0);
/*8012B2F0 001280F0*/ PPC::Runtime::ASM::bne(.L_8012B30C);
/*8012B2F4 001280F4*/ PPC::Runtime::ASM::and.(context->r0, context->r3, context->r29);
/*8012B2F8 001280F8*/ PPC::Runtime::ASM::beq(.L_8012B374);
/*8012B2FC 001280FC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8012B300 00128100*/ PPC::Runtime::ASM::mr(context->r4, context->r25);
/*8012B304 00128104*/ PPC::Runtime::ASM::bl(fn_8012AF14);
/*8012B308 00128108*/ PPC::Runtime::ASM::b(.L_8012B374);
RUNTIME_PPC_JUMP_LABEL(.L_8012B30C, 0x8012B30C) //this is a jump label
/*8012B30C 0012810C*/ PPC::Runtime::ASM::and.(context->r0, context->r3, context->r29);
/*8012B310 00128110*/ PPC::Runtime::ASM::bne(.L_8012B374);
/*8012B314 00128114*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8012B318 00128118*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8012B31C 0012811C*/ PPC::Runtime::ASM::mr(context->r26, context->r31);
/*8012B320 00128120*/ PPC::Runtime::ASM::mr(context->r30, context->r27);
/*8012B324 00128124*/ PPC::Runtime::ASM::addi(context->r28, context->r25, 0xa);
RUNTIME_PPC_JUMP_LABEL(.L_8012B328, 0x8012B328) //this is a jump label
/*8012B328 00128128*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r26));
/*8012B32C 0012812C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8012B330 00128130*/ PPC::Runtime::ASM::beq(.L_8012B34C);
/*8012B334 00128134*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8012B338 00128138*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*8012B33C 0012813C*/ PPC::Runtime::ASM::cmpw(context->r0, context->r28);
/*8012B340 00128140*/ PPC::Runtime::ASM::bne(.L_8012B34C);
/*8012B344 00128144*/ PPC::Runtime::ASM::bl(fn_8011582C);
/*8012B348 00128148*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_8012B34C, 0x8012B34C) //this is a jump label
/*8012B34C 0012814C*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
/*8012B350 00128150*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x4);
/*8012B354 00128154*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x3);
/*8012B358 00128158*/ PPC::Runtime::ASM::blt(.L_8012B328);
/*8012B35C 0012815C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*8012B360 00128160*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8012B364 00128164*/ PPC::Runtime::ASM::beq(.L_8012B374);
/*8012B368 00128168*/ PPC::Runtime::ASM::bl(fn_8011582C);
/*8012B36C 0012816C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8012B370 00128170*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8012B374, 0x8012B374) //this is a jump label
/*8012B374 00128174*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0x1);
/*8012B378 00128178*/ PPC::Runtime::ASM::cmpwi(context->r25, 0x3);
/*8012B37C 0012817C*/ PPC::Runtime::ASM::blt(.L_8012B2E0);
/*8012B380 00128180*/ PPC::Runtime::ASM::stb(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x49, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8012B384, 0x8012B384) //this is a jump label
/*8012B384 00128184*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8012B388 00128188*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*8012B38C 0012818C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8012B390 00128190*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8012B394 00128194*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8012B398 00128198*/ PPC::Runtime::ASM::blr();
}