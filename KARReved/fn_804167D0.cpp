//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_PSVECNormalize.hpp"
#include "fn_PSVECNormalize.hpp"
#include "fn_PSVECCrossProduct.hpp"
#include "fn_PSVECCrossProduct.hpp"
#include "fn_PSVECNormalize.hpp"
#include "fn_PSVECCrossProduct.hpp"
#include "fn_PSVECCrossProduct.hpp"
#include "fn_PSVECNormalize.hpp"
#include "fn_PSVECNormalize.hpp"
#include "fn_PSVECCrossProduct.hpp"
#include "fn_PSVECCrossProduct.hpp"
#include "fn_PSVECNormalize.hpp"
#include "fn_PSVECCrossProduct.hpp"
#include "fn_PSVECCrossProduct.hpp"
#include "fn_PSVECNormalize.hpp"
#include "fn_PSVECNormalize.hpp"
#include "fn_PSVECCrossProduct.hpp"
#include "fn_PSVECCrossProduct.hpp"
#include "fn_PSVECNormalize.hpp"
#include "fn_PSVECCrossProduct.hpp"
#include "fn_PSVECCrossProduct.hpp"



void fn_804167D0(PPC::Runtime::GCContext* context)
{
/*804167D0 004135D0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*804167D4 004135D4*/ PPC::Runtime::ASM::mflr(context->r0);
/*804167D8 004135D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*804167DC 004135DC*/ PPC::Runtime::ASM::extsb(context->r0, context->r5);
/*804167E0 004135E0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x78);
/*804167E4 004135E4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*804167E8 004135E8*/ PPC::Runtime::ASM::mr(context->r31, context->r6);
/*804167EC 004135EC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*804167F0 004135F0*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*804167F4 004135F4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*804167F8 004135F8*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*804167FC 004135FC*/ PPC::Runtime::ASM::beq(.L_80416828);
/*80416800 00413600*/ PPC::Runtime::ASM::bge(.L_8041681C);
/*80416804 00413604*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x59);
/*80416808 00413608*/ PPC::Runtime::ASM::beq(.L_804168F8);
/*8041680C 0041360C*/ PPC::Runtime::ASM::bge(.L_804169C8);
/*80416810 00413610*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x58);
/*80416814 00413614*/ PPC::Runtime::ASM::bge(.L_80416828);
/*80416818 00413618*/ PPC::Runtime::ASM::b(.L_804169C8);
RUNTIME_PPC_JUMP_LABEL(.L_8041681C, 0x8041681C) //this is a jump label
/*8041681C 0041361C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x7a);
/*80416820 00413620*/ PPC::Runtime::ASM::bge(.L_804169C8);
/*80416824 00413624*/ PPC::Runtime::ASM::b(.L_804168F8);
RUNTIME_PPC_JUMP_LABEL(.L_80416828, 0x80416828) //this is a jump label
/*80416828 00413628*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8041682C 0041362C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*80416830 00413630*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80416834 00413634*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80416838 00413638*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*8041683C 0041363C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80416840 00413640*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*80416844 00413644*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80416848 00413648*/ PPC::Runtime::ASM::bl(fn_PSVECNormalize);
/*8041684C 0041364C*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*80416850 00413650*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x7a);
/*80416854 00413654*/ PPC::Runtime::ASM::beq(.L_80416868);
/*80416858 00413658*/ PPC::Runtime::ASM::bge(.L_804168B0);
/*8041685C 0041365C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x5a);
/*80416860 00413660*/ PPC::Runtime::ASM::beq(.L_80416868);
/*80416864 00413664*/ PPC::Runtime::ASM::b(.L_804168B0);
RUNTIME_PPC_JUMP_LABEL(.L_80416868, 0x80416868) //this is a jump label
/*80416868 00413668*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*8041686C 0041366C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80416870 00413670*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80416874 00413674*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80416878 00413678*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*8041687C 0041367C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80416880 00413680*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*80416884 00413684*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80416888 00413688*/ PPC::Runtime::ASM::bl(fn_PSVECNormalize);
/*8041688C 0041368C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80416890 00413690*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*80416894 00413694*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x14);
/*80416898 00413698*/ PPC::Runtime::ASM::bl(fn_PSVECCrossProduct);
/*8041689C 0041369C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*804168A0 004136A0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*804168A4 004136A4*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*804168A8 004136A8*/ PPC::Runtime::ASM::bl(fn_PSVECCrossProduct);
/*804168AC 004136AC*/ PPC::Runtime::ASM::b(.L_80416A94);
RUNTIME_PPC_JUMP_LABEL(.L_804168B0, 0x804168B0) //this is a jump label
/*804168B0 004136B0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*804168B4 004136B4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*804168B8 004136B8*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*804168BC 004136BC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804168C0 004136C0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*804168C4 004136C4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*804168C8 004136C8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*804168CC 004136CC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*804168D0 004136D0*/ PPC::Runtime::ASM::bl(fn_PSVECNormalize);
/*804168D4 004136D4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*804168D8 004136D8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*804168DC 004136DC*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*804168E0 004136E0*/ PPC::Runtime::ASM::bl(fn_PSVECCrossProduct);
/*804168E4 004136E4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*804168E8 004136E8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*804168EC 004136EC*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x14);
/*804168F0 004136F0*/ PPC::Runtime::ASM::bl(fn_PSVECCrossProduct);
/*804168F4 004136F4*/ PPC::Runtime::ASM::b(.L_80416A94);
RUNTIME_PPC_JUMP_LABEL(.L_804168F8, 0x804168F8) //this is a jump label
/*804168F8 004136F8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*804168FC 004136FC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*80416900 00413700*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80416904 00413704*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80416908 00413708*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8041690C 0041370C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80416910 00413710*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*80416914 00413714*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80416918 00413718*/ PPC::Runtime::ASM::bl(fn_PSVECNormalize);
/*8041691C 0041371C*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*80416920 00413720*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x78);
/*80416924 00413724*/ PPC::Runtime::ASM::beq(.L_80416938);
/*80416928 00413728*/ PPC::Runtime::ASM::bge(.L_80416980);
/*8041692C 0041372C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x58);
/*80416930 00413730*/ PPC::Runtime::ASM::beq(.L_80416938);
/*80416934 00413734*/ PPC::Runtime::ASM::b(.L_80416980);
RUNTIME_PPC_JUMP_LABEL(.L_80416938, 0x80416938) //this is a jump label
/*80416938 00413738*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8041693C 0041373C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*80416940 00413740*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80416944 00413744*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80416948 00413748*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*8041694C 0041374C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80416950 00413750*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*80416954 00413754*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80416958 00413758*/ PPC::Runtime::ASM::bl(fn_PSVECNormalize);
/*8041695C 0041375C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*80416960 00413760*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*80416964 00413764*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*80416968 00413768*/ PPC::Runtime::ASM::bl(fn_PSVECCrossProduct);
/*8041696C 0041376C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*80416970 00413770*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80416974 00413774*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x20);
/*80416978 00413778*/ PPC::Runtime::ASM::bl(fn_PSVECCrossProduct);
/*8041697C 0041377C*/ PPC::Runtime::ASM::b(.L_80416A94);
RUNTIME_PPC_JUMP_LABEL(.L_80416980, 0x80416980) //this is a jump label
/*80416980 00413780*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*80416984 00413784*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80416988 00413788*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8041698C 0041378C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80416990 00413790*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*80416994 00413794*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80416998 00413798*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*8041699C 0041379C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*804169A0 004137A0*/ PPC::Runtime::ASM::bl(fn_PSVECNormalize);
/*804169A4 004137A4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*804169A8 004137A8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*804169AC 004137AC*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x20);
/*804169B0 004137B0*/ PPC::Runtime::ASM::bl(fn_PSVECCrossProduct);
/*804169B4 004137B4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*804169B8 004137B8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*804169BC 004137BC*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*804169C0 004137C0*/ PPC::Runtime::ASM::bl(fn_PSVECCrossProduct);
/*804169C4 004137C4*/ PPC::Runtime::ASM::b(.L_80416A94);
RUNTIME_PPC_JUMP_LABEL(.L_804169C8, 0x804169C8) //this is a jump label
/*804169C8 004137C8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*804169CC 004137CC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*804169D0 004137D0*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*804169D4 004137D4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*804169D8 004137D8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*804169DC 004137DC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*804169E0 004137E0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*804169E4 004137E4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*804169E8 004137E8*/ PPC::Runtime::ASM::bl(fn_PSVECNormalize);
/*804169EC 004137EC*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*804169F0 004137F0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x79);
/*804169F4 004137F4*/ PPC::Runtime::ASM::beq(.L_80416A08);
/*804169F8 004137F8*/ PPC::Runtime::ASM::bge(.L_80416A50);
/*804169FC 004137FC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x59);
/*80416A00 00413800*/ PPC::Runtime::ASM::beq(.L_80416A08);
/*80416A04 00413804*/ PPC::Runtime::ASM::b(.L_80416A50);
RUNTIME_PPC_JUMP_LABEL(.L_80416A08, 0x80416A08) //this is a jump label
/*80416A08 00413808*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*80416A0C 0041380C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*80416A10 00413810*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80416A14 00413814*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80416A18 00413818*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80416A1C 0041381C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80416A20 00413820*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*80416A24 00413824*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80416A28 00413828*/ PPC::Runtime::ASM::bl(fn_PSVECNormalize);
/*80416A2C 0041382C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*80416A30 00413830*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80416A34 00413834*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x20);
/*80416A38 00413838*/ PPC::Runtime::ASM::bl(fn_PSVECCrossProduct);
/*80416A3C 0041383C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80416A40 00413840*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*80416A44 00413844*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x14);
/*80416A48 00413848*/ PPC::Runtime::ASM::bl(fn_PSVECCrossProduct);
/*80416A4C 0041384C*/ PPC::Runtime::ASM::b(.L_80416A94);
RUNTIME_PPC_JUMP_LABEL(.L_80416A50, 0x80416A50) //this is a jump label
/*80416A50 00413850*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80416A54 00413854*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*80416A58 00413858*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80416A5C 0041385C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80416A60 00413860*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*80416A64 00413864*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80416A68 00413868*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*80416A6C 0041386C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80416A70 00413870*/ PPC::Runtime::ASM::bl(fn_PSVECNormalize);
/*80416A74 00413874*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80416A78 00413878*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*80416A7C 0041387C*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x14);
/*80416A80 00413880*/ PPC::Runtime::ASM::bl(fn_PSVECCrossProduct);
/*80416A84 00413884*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*80416A88 00413888*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80416A8C 0041388C*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x20);
/*80416A90 00413890*/ PPC::Runtime::ASM::bl(fn_PSVECCrossProduct);
RUNTIME_PPC_JUMP_LABEL(.L_80416A94, 0x80416A94) //this is a jump label
/*80416A94 00413894*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80416A98 00413898*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5C3C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80416A9C 0041389C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80416AA0 004138A0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80416AA4 004138A4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*80416AA8 004138A8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80416AAC 004138AC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*80416AB0 004138B0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80416AB4 004138B4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80416AB8 004138B8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80416ABC 004138BC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80416AC0 004138C0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80416AC4 004138C4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*80416AC8 004138C8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80416ACC 004138CC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80416AD0 004138D0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80416AD4 004138D4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*80416AD8 004138D8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80416ADC 004138DC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*80416AE0 004138E0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*80416AE4 004138E4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*80416AE8 004138E8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*80416AEC 004138EC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80416AF0 004138F0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80416AF4 004138F4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80416AF8 004138F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80416AFC 004138FC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80416B00 00413900*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*80416B04 00413904*/ PPC::Runtime::ASM::blr();
}