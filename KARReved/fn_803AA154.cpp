//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_803AA154(PPC::Runtime::GCContext* context)
{
/*803AA154 003A6F54*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803AA158 003A6F58*/ PPC::Runtime::ASM::mflr(context->r0);
/*803AA15C 003A6F5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803AA160 003A6F60*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803AA164 003A6F64*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*803AA168 003A6F68*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803AA16C 003A6F6C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803AA170 003A6F70*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803AA174 003A6F74*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13c, context->r3));
/*803AA178 003A6F78*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803AA17C 003A6F7C*/ PPC::Runtime::ASM::beq(.L_803AA198);
/*803AA180 003A6F80*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803AA184 003A6F84*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*803AA188 003A6F88*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803AA18C 003A6F8C*/ PPC::Runtime::ASM::bctrl();
/*803AA190 003A6F90*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*803AA194 003A6F94*/ PPC::Runtime::ASM::b(.L_803AA19C);
RUNTIME_PPC_JUMP_LABEL(.L_803AA198, 0x803AA198) //this is a jump label
/*803AA198 003A6F98*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803AA19C, 0x803AA19C) //this is a jump label
/*803AA19C 003A6F9C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13c, context->r31));
/*803AA1A0 003A6FA0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803AA1A4 003A6FA4*/ PPC::Runtime::ASM::beq(.L_803AA1BC);
/*803AA1A8 003A6FA8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803AA1AC 003A6FAC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*803AA1B0 003A6FB0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803AA1B4 003A6FB4*/ PPC::Runtime::ASM::bctrl();
/*803AA1B8 003A6FB8*/ PPC::Runtime::ASM::b(.L_803AA1C0);
RUNTIME_PPC_JUMP_LABEL(.L_803AA1BC, 0x803AA1BC) //this is a jump label
/*803AA1BC 003A6FBC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803AA1C0, 0x803AA1C0) //this is a jump label
/*803AA1C0 003A6FC0*/ PPC::Runtime::ASM::subfic(context->r0, context->r3, 0x90);
/*803AA1C4 003A6FC4*/ PPC::Runtime::ASM::subf(context->r0, context->r29, context->r0);
/*803AA1C8 003A6FC8*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r31));
/*803AA1CC 003A6FCC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13c, context->r31));
/*803AA1D0 003A6FD0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803AA1D4 003A6FD4*/ PPC::Runtime::ASM::beq(.L_803AA1F0);
/*803AA1D8 003A6FD8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803AA1DC 003A6FDC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*803AA1E0 003A6FE0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803AA1E4 003A6FE4*/ PPC::Runtime::ASM::bctrl();
/*803AA1E8 003A6FE8*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*803AA1EC 003A6FEC*/ PPC::Runtime::ASM::b(.L_803AA1F4);
RUNTIME_PPC_JUMP_LABEL(.L_803AA1F0, 0x803AA1F0) //this is a jump label
/*803AA1F0 003A6FF0*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803AA1F4, 0x803AA1F4) //this is a jump label
/*803AA1F4 003A6FF4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13c, context->r31));
/*803AA1F8 003A6FF8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803AA1FC 003A6FFC*/ PPC::Runtime::ASM::beq(.L_803AA214);
/*803AA200 003A7000*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803AA204 003A7004*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*803AA208 003A7008*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803AA20C 003A700C*/ PPC::Runtime::ASM::bctrl();
/*803AA210 003A7010*/ PPC::Runtime::ASM::b(.L_803AA218);
RUNTIME_PPC_JUMP_LABEL(.L_803AA214, 0x803AA214) //this is a jump label
/*803AA214 003A7014*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803AA218, 0x803AA218) //this is a jump label
/*803AA218 003A7018*/ PPC::Runtime::ASM::subfic(context->r0, context->r3, 0x18);
/*803AA21C 003A701C*/ PPC::Runtime::ASM::subf(context->r0, context->r29, context->r0);
/*803AA220 003A7020*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x136, context->r31));
/*803AA224 003A7024*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r31));
/*803AA228 003A7028*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803AA22C 003A702C*/ PPC::Runtime::ASM::beq(.L_803AA248);
/*803AA230 003A7030*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803AA234 003A7034*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*803AA238 003A7038*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803AA23C 003A703C*/ PPC::Runtime::ASM::bctrl();
/*803AA240 003A7040*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*803AA244 003A7044*/ PPC::Runtime::ASM::b(.L_803AA24C);
RUNTIME_PPC_JUMP_LABEL(.L_803AA248, 0x803AA248) //this is a jump label
/*803AA248 003A7048*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803AA24C, 0x803AA24C) //this is a jump label
/*803AA24C 003A704C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r31));
/*803AA250 003A7050*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803AA254 003A7054*/ PPC::Runtime::ASM::beq(.L_803AA26C);
/*803AA258 003A7058*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803AA25C 003A705C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*803AA260 003A7060*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803AA264 003A7064*/ PPC::Runtime::ASM::bctrl();
/*803AA268 003A7068*/ PPC::Runtime::ASM::b(.L_803AA270);
RUNTIME_PPC_JUMP_LABEL(.L_803AA26C, 0x803AA26C) //this is a jump label
/*803AA26C 003A706C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803AA270, 0x803AA270) //this is a jump label
/*803AA270 003A7070*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r29);
/*803AA274 003A7074*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*803AA278 003A7078*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x4);
/*803AA27C 003A707C*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*803AA280 003A7080*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r31));
/*803AA284 003A7084*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r31));
/*803AA288 003A7088*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803AA28C 003A708C*/ PPC::Runtime::ASM::beq(.L_803AA2A8);
/*803AA290 003A7090*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803AA294 003A7094*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*803AA298 003A7098*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803AA29C 003A709C*/ PPC::Runtime::ASM::bctrl();
/*803AA2A0 003A70A0*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*803AA2A4 003A70A4*/ PPC::Runtime::ASM::b(.L_803AA2AC);
RUNTIME_PPC_JUMP_LABEL(.L_803AA2A8, 0x803AA2A8) //this is a jump label
/*803AA2A8 003A70A8*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803AA2AC, 0x803AA2AC) //this is a jump label
/*803AA2AC 003A70AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r31));
/*803AA2B0 003A70B0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803AA2B4 003A70B4*/ PPC::Runtime::ASM::beq(.L_803AA2CC);
/*803AA2B8 003A70B8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803AA2BC 003A70BC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*803AA2C0 003A70C0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803AA2C4 003A70C4*/ PPC::Runtime::ASM::bctrl();
/*803AA2C8 003A70C8*/ PPC::Runtime::ASM::b(.L_803AA2D0);
RUNTIME_PPC_JUMP_LABEL(.L_803AA2CC, 0x803AA2CC) //this is a jump label
/*803AA2CC 003A70CC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803AA2D0, 0x803AA2D0) //this is a jump label
/*803AA2D0 003A70D0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13c, context->r31));
/*803AA2D4 003A70D4*/ PPC::Runtime::ASM::add(context->r30, context->r3, context->r29);
/*803AA2D8 003A70D8*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x66, context->r31));
/*803AA2DC 003A70DC*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*803AA2E0 003A70E0*/ PPC::Runtime::ASM::add(context->r30, context->r0, context->r30);
/*803AA2E4 003A70E4*/ PPC::Runtime::ASM::beq(.L_803AA304);
/*803AA2E8 003A70E8*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*803AA2EC 003A70EC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803AA2F0 003A70F0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*803AA2F4 003A70F4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803AA2F8 003A70F8*/ PPC::Runtime::ASM::bctrl();
/*803AA2FC 003A70FC*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*803AA300 003A7100*/ PPC::Runtime::ASM::b(.L_803AA308);
RUNTIME_PPC_JUMP_LABEL(.L_803AA304, 0x803AA304) //this is a jump label
/*803AA304 003A7104*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803AA308, 0x803AA308) //this is a jump label
/*803AA308 003A7108*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13c, context->r31));
/*803AA30C 003A710C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803AA310 003A7110*/ PPC::Runtime::ASM::beq(.L_803AA328);
/*803AA314 003A7114*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803AA318 003A7118*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*803AA31C 003A711C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803AA320 003A7120*/ PPC::Runtime::ASM::bctrl();
/*803AA324 003A7124*/ PPC::Runtime::ASM::b(.L_803AA32C);
RUNTIME_PPC_JUMP_LABEL(.L_803AA328, 0x803AA328) //this is a jump label
/*803AA328 003A7128*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803AA32C, 0x803AA32C) //this is a jump label
/*803AA32C 003A712C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r31));
/*803AA330 003A7130*/ PPC::Runtime::ASM::add(context->r28, context->r3, context->r29);
/*803AA334 003A7134*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r31));
/*803AA338 003A7138*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*803AA33C 003A713C*/ PPC::Runtime::ASM::add(context->r28, context->r0, context->r28);
/*803AA340 003A7140*/ PPC::Runtime::ASM::beq(.L_803AA360);
/*803AA344 003A7144*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*803AA348 003A7148*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803AA34C 003A714C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*803AA350 003A7150*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803AA354 003A7154*/ PPC::Runtime::ASM::bctrl();
/*803AA358 003A7158*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*803AA35C 003A715C*/ PPC::Runtime::ASM::b(.L_803AA364);
RUNTIME_PPC_JUMP_LABEL(.L_803AA360, 0x803AA360) //this is a jump label
/*803AA360 003A7160*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803AA364, 0x803AA364) //this is a jump label
/*803AA364 003A7164*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r31));
/*803AA368 003A7168*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803AA36C 003A716C*/ PPC::Runtime::ASM::beq(.L_803AA384);
/*803AA370 003A7170*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803AA374 003A7174*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*803AA378 003A7178*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803AA37C 003A717C*/ PPC::Runtime::ASM::bctrl();
/*803AA380 003A7180*/ PPC::Runtime::ASM::b(.L_803AA388);
RUNTIME_PPC_JUMP_LABEL(.L_803AA384, 0x803AA384) //this is a jump label
/*803AA384 003A7184*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803AA388, 0x803AA388) //this is a jump label
/*803AA388 003A7188*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r29);
/*803AA38C 003A718C*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*803AA390 003A7190*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*803AA394 003A7194*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*803AA398 003A7198*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r28);
/*803AA39C 003A719C*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r3);
/*803AA3A0 003A71A0*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*803AA3A4 003A71A4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*803AA3A8 003A71A8*/ PPC::Runtime::ASM::sth(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26, context->r31));
/*803AA3AC 003A71AC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*803AA3B0 003A71B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803AA3B4 003A71B4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803AA3B8 003A71B8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803AA3BC 003A71BC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803AA3C0 003A71C0*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803AA3C4 003A71C4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803AA3C8 003A71C8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803AA3CC 003A71CC*/ PPC::Runtime::ASM::blr();
}