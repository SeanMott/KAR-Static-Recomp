//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801AA280(PPC::Runtime::GCContext* context)
{
/*801AA280 001A7080*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801AA284 001A7084*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AA288 001A7088*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801AA28C 001A708C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801AA290 001A7090*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*801AA294 001A7094*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801AA298 001A7098*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*801AA29C 001A709C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AA2A0 001A70A0*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*801AA2A4 001A70A4*/ PPC::Runtime::ASM::b(.L_801AA3F0);
RUNTIME_PPC_JUMP_LABEL(.L_801AA2A8, 0x801AA2A8) //this is a jump label
/*801AA2A8 001A70A8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801AA2AC 001A70AC*/ PPC::Runtime::ASM::bl(fn_8040BCA0);
/*801AA2B0 001A70B0*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
RUNTIME_PPC_JUMP_LABEL(.L_801AA2B4, 0x801AA2B4) //this is a jump label
/*801AA2B4 001A70B4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801AA2B8 001A70B8*/ PPC::Runtime::ASM::beq(.L_801AA2E0);
/*801AA2BC 001A70BC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*801AA2C0 001A70C0*/ PPC::Runtime::ASM::stwx(context->r3, context->r4, context->r5);
/*801AA2C4 001A70C4*/ PPC::Runtime::ASM::beq(.L_801AA2D0);
/*801AA2C8 001A70C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801AA2CC 001A70CC*/ PPC::Runtime::ASM::b(.L_801AA2D4);
RUNTIME_PPC_JUMP_LABEL(.L_801AA2D0, 0x801AA2D0) //this is a jump label
/*801AA2D0 001A70D0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801AA2D4, 0x801AA2D4) //this is a jump label
/*801AA2D4 001A70D4*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x4);
/*801AA2D8 001A70D8*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x4);
/*801AA2DC 001A70DC*/ PPC::Runtime::ASM::b(.L_801AA2B4);
RUNTIME_PPC_JUMP_LABEL(.L_801AA2E0, 0x801AA2E0) //this is a jump label
/*801AA2E0 001A70E0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801AA2E4 001A70E4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjGetFlags);
/*801AA2E8 001A70E8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 19, 19);
/*801AA2EC 001A70EC*/ PPC::Runtime::ASM::bne(.L_801AA324);
/*801AA2F0 001A70F0*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*801AA2F4 001A70F4*/ PPC::Runtime::ASM::bne(.L_801AA300);
/*801AA2F8 001A70F8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801AA2FC 001A70FC*/ PPC::Runtime::ASM::b(.L_801AA304);
RUNTIME_PPC_JUMP_LABEL(.L_801AA300, 0x801AA300) //this is a jump label
/*801AA300 001A7100*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_801AA304, 0x801AA304) //this is a jump label
/*801AA304 001A7104*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801AA308 001A7108*/ PPC::Runtime::ASM::beq(.L_801AA324);
/*801AA30C 001A710C*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*801AA310 001A7110*/ PPC::Runtime::ASM::bne(.L_801AA31C);
/*801AA314 001A7114*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*801AA318 001A7118*/ PPC::Runtime::ASM::b(.L_801AA3F0);
RUNTIME_PPC_JUMP_LABEL(.L_801AA31C, 0x801AA31C) //this is a jump label
/*801AA31C 001A711C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*801AA320 001A7120*/ PPC::Runtime::ASM::b(.L_801AA3F0);
RUNTIME_PPC_JUMP_LABEL(.L_801AA324, 0x801AA324) //this is a jump label
/*801AA324 001A7124*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*801AA328 001A7128*/ PPC::Runtime::ASM::bne(.L_801AA334);
/*801AA32C 001A712C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801AA330 001A7130*/ PPC::Runtime::ASM::b(.L_801AA338);
RUNTIME_PPC_JUMP_LABEL(.L_801AA334, 0x801AA334) //this is a jump label
/*801AA334 001A7134*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_801AA338, 0x801AA338) //this is a jump label
/*801AA338 001A7138*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801AA33C 001A713C*/ PPC::Runtime::ASM::beq(.L_801AA358);
/*801AA340 001A7140*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*801AA344 001A7144*/ PPC::Runtime::ASM::bne(.L_801AA350);
/*801AA348 001A7148*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*801AA34C 001A714C*/ PPC::Runtime::ASM::b(.L_801AA3F0);
RUNTIME_PPC_JUMP_LABEL(.L_801AA350, 0x801AA350) //this is a jump label
/*801AA350 001A7150*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*801AA354 001A7154*/ PPC::Runtime::ASM::b(.L_801AA3F0);
RUNTIME_PPC_JUMP_LABEL(.L_801AA358, 0x801AA358) //this is a jump label
/*801AA358 001A7158*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*801AA35C 001A715C*/ PPC::Runtime::ASM::bne(.L_801AA368);
/*801AA360 001A7160*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801AA364 001A7164*/ PPC::Runtime::ASM::b(.L_801AA36C);
RUNTIME_PPC_JUMP_LABEL(.L_801AA368, 0x801AA368) //this is a jump label
/*801AA368 001A7168*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_801AA36C, 0x801AA36C) //this is a jump label
/*801AA36C 001A716C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801AA370 001A7170*/ PPC::Runtime::ASM::bne(.L_801AA37C);
/*801AA374 001A7174*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*801AA378 001A7178*/ PPC::Runtime::ASM::b(.L_801AA3F0);
RUNTIME_PPC_JUMP_LABEL(.L_801AA37C, 0x801AA37C) //this is a jump label
/*801AA37C 001A717C*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*801AA380 001A7180*/ PPC::Runtime::ASM::bne(.L_801AA38C);
/*801AA384 001A7184*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801AA388 001A7188*/ PPC::Runtime::ASM::b(.L_801AA390);
RUNTIME_PPC_JUMP_LABEL(.L_801AA38C, 0x801AA38C) //this is a jump label
/*801AA38C 001A718C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_801AA390, 0x801AA390) //this is a jump label
/*801AA390 001A7190*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801AA394 001A7194*/ PPC::Runtime::ASM::bne(.L_801AA3A0);
/*801AA398 001A7198*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801AA39C 001A719C*/ PPC::Runtime::ASM::b(.L_801AA3A4);
RUNTIME_PPC_JUMP_LABEL(.L_801AA3A0, 0x801AA3A0) //this is a jump label
/*801AA3A0 001A71A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_801AA3A4, 0x801AA3A4) //this is a jump label
/*801AA3A4 001A71A4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801AA3A8 001A71A8*/ PPC::Runtime::ASM::beq(.L_801AA3D8);
/*801AA3AC 001A71AC*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*801AA3B0 001A71B0*/ PPC::Runtime::ASM::bne(.L_801AA3BC);
/*801AA3B4 001A71B4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801AA3B8 001A71B8*/ PPC::Runtime::ASM::b(.L_801AA3C0);
RUNTIME_PPC_JUMP_LABEL(.L_801AA3BC, 0x801AA3BC) //this is a jump label
/*801AA3BC 001A71BC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_801AA3C0, 0x801AA3C0) //this is a jump label
/*801AA3C0 001A71C0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801AA3C4 001A71C4*/ PPC::Runtime::ASM::bne(.L_801AA3D0);
/*801AA3C8 001A71C8*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*801AA3CC 001A71CC*/ PPC::Runtime::ASM::b(.L_801AA3F0);
RUNTIME_PPC_JUMP_LABEL(.L_801AA3D0, 0x801AA3D0) //this is a jump label
/*801AA3D0 001A71D0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*801AA3D4 001A71D4*/ PPC::Runtime::ASM::b(.L_801AA3F0);
RUNTIME_PPC_JUMP_LABEL(.L_801AA3D8, 0x801AA3D8) //this is a jump label
/*801AA3D8 001A71D8*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*801AA3DC 001A71DC*/ PPC::Runtime::ASM::bne(.L_801AA3E8);
/*801AA3E0 001A71E0*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*801AA3E4 001A71E4*/ PPC::Runtime::ASM::b(.L_801AA358);
RUNTIME_PPC_JUMP_LABEL(.L_801AA3E8, 0x801AA3E8) //this is a jump label
/*801AA3E8 001A71E8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*801AA3EC 001A71EC*/ PPC::Runtime::ASM::b(.L_801AA358);
RUNTIME_PPC_JUMP_LABEL(.L_801AA3F0, 0x801AA3F0) //this is a jump label
/*801AA3F0 001A71F0*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*801AA3F4 001A71F4*/ PPC::Runtime::ASM::bne(.L_801AA2A8);
/*801AA3F8 001A71F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801AA3FC 001A71FC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801AA400 001A7200*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801AA404 001A7204*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AA408 001A7208*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AA40C 001A720C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801AA410 001A7210*/ PPC::Runtime::ASM::blr();
}